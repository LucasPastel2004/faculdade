package aplicativo;
import reinoAnimal.Caninos;
import reinoAnimal.Felinos;
import reinoAnimal.Mamiferos;






public class PlanetaTerra {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Mamiferos mamal = new Mamiferos();
		Caninos cachorro = new Caninos("Joao", "TGAC");
		Felinos gato = new Felinos("CATG");
		
		//System.out.println("Dados do mamifero: " + mamal);
		System.out.println("Dados do canino: " + cachorro);
		System.out.println("Dados do felino: " + gato);
		
		
		cachorro.latir();
		cachorro.cavar();
		cachorro.movimento();
		
		gato.miar();
		gato.movimento();
		
		
	}

}
