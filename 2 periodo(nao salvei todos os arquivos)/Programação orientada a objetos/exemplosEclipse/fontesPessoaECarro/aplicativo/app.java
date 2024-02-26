package aplicativo;

import utilidades.Carro;
import utilidades.Pessoa;

public class app {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Pessoa alexandre = new Pessoa();
		
		Carro up = new Carro("PRY5555", "345678y4ty54po9");
		
		System.out.println("Oi estou rodando....");
		System.out.println(up.toSTring());
		
		up.setPlaca("PRY 8888");
		up.setChassis("555555555");
		System.out.println(up.toSTring());
		
		System.out.println("Valor da placa: " + up.getPlaca());
		System.out.println("Valor do Chassis: " + up.getChassis());
		
		
	}

}
