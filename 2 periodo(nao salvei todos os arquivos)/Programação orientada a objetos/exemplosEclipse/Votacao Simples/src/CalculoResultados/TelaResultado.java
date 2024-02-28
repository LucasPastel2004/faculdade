package CalculoResultados;

import java.awt.GridLayout;
import java.awt.Label;
import java.awt.Window;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.awt.Color;
import java.awt.Frame;

public class TelaResultado extends Window{
    
    private Map <String, Label>labels = new HashMap();
    
    public TelaResultado(Frame parent){
        super(parent);
        this.setSize(210,420);
        this.setBackground(Color.LIGHT_GRAY);
        this.setLayout(new GridLayout(0,2)); // Grid com qualquer numero
                                              // de linhas e duas colunas
        this.add(new Label("Votos"));
        this.add(new Label());
    }

    /**
     * Recebe a lista de opcoes inicial
     */
    public void inicializar(ArrayList <String> opcoes) {
        
        Label label;
        Label votos;
        for(String opcao : opcoes){
            if(!labels.containsKey(opcao)){
                label = new Label(opcao+" - ");
                votos = new Label(""+0);
                labels.put(opcao,votos);
                this.add(label);
                this.add(votos);
            }
        }
    }

    /**
     * Atualiza a quantidade de votos para uma determinada opcao
     */
    public void novoVoto(String opcao, int nvotos) {
        Label votos;
        votos = labels.get(opcao);
        votos.setText(""+nvotos);
    }
}