package utilidades;
import java.util.GregorianCalendar;


public class Pessoa {
	//nome sexo RG data nascimento
	public String nome;
	public String sexo;
	public String RG;
	
	GregorianCalendar DataNascimento;
	//Construtor Default
	public Pessoa(){
		
	}
	//Construtor Completo
	public Pessoa(String nome, String sexo, String RG, GregorianCalendar DataNascimento){
		this.nome = nome;
		this.sexo = sexo;
		this.RG = RG;
		this.DataNascimento  = DataNascimento;
	}
	
	public String toString() {
		return this.nome + this.sexo + this.RG + this.DataNascimento;
	}

}
