package principal;

import java.awt.Button;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import CalculoResultados.TelaResultado;
import CalculoResultados.TelaResultadoPercentual;

import java.awt.Frame;

public class TelaVotacao extends Frame implements ActionListener {

    private TelaResultado telaResult;
    private TelaResultadoPercentual telaResultPerc;

    private Map <String,Integer>opcoes;
    private ArrayList <String>listaOpcoes; // para obter as opções em ordem

    public TelaVotacao() {
        super("Tela de Votação - Enquete");

        telaResult = new TelaResultado(this);
        telaResult.setLocation(420, 35); // posicao na tela

        telaResultPerc = new TelaResultadoPercentual(this);
        telaResultPerc.setLocation(850, 35); // posicao na tela

        listaOpcoes = new ArrayList<String>();
        this.opcoes = new HashMap<String, Integer>();

        this.adicionaOpcao("1N");
        this.adicionaOpcao("2N");
        this.adicionaOpcao("3N");
        this.adicionaOpcao("4N");
        criarBotoes();

        telaResult.inicializar(listaOpcoes);
        telaResultPerc.inicializar(listaOpcoes);

        this.setSize(400, 620);
        this.setLayout(new GridLayout(0, 1));
        
        this.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                e.getWindow().hide();
                System.exit(0);
            }
        });
        this.show();
        telaResult.show();
        telaResultPerc.show();
    }
    public static void main(String[] args) {
    	TelaVotacao tela = new TelaVotacao();
    }

    /**
     * Adiciona uma opcao � enquete
     **/
    private void adicionaOpcao(String opcao) {
        listaOpcoes.add(opcao);
        this.opcoes.put(opcao, new Integer(0));
    }

    /**
     * Cria os botoes da tela de votos
     **/
    public void criarBotoes() {
        Button botao;
        for (String opcao : listaOpcoes) {
            botao = new Button(opcao);
            botao.setActionCommand(opcao);
            botao.addActionListener(this);
            this.add(botao);
        }
    }

    /**
     * M�todo executado ao clicar nos bot�es
     */
    public void actionPerformed(ActionEvent event) {
        String opcao = event.getActionCommand();
        this.votar(opcao); // incrementando o voto

        // Atualizando a tela de resultados absolutos
        telaResult.novoVoto(opcao, getVotos(opcao));

        // Atualizando a tela de resultados percentuais
        telaResultPerc.novoVoto(opcao, getVotos(opcao), getTotalVotos());
    }

    /**
     * Incrementa o voto da op��o entrada
     */
    public void votar(String opcao) {
        int votoAtual = ((Integer) this.opcoes.get(opcao)).intValue();
        this.opcoes.put(opcao, new Integer(++votoAtual));
    }

    /**
     * Retorna a soma dos votos de todas as op��es da enquete
     * @return int soma dos votos de todas as op��es da enquete
     */
    public int getTotalVotos() {
        int total = 0;
        for (Integer votos : opcoes.values()) {
            total += votos.intValue();
        }
        return total;
    }

    /**
     * Retorna a quantidade de votos de uma op��o individual
     */
    public int getVotos(String opcao) {
        return ((Integer) this.opcoes.get(opcao)).intValue();
    }
}