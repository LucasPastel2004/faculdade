package reinoAnimal;

public class Felinos extends Mamiferos {
	private String TipoPupila = "Alongada Verticamente";
	
	public Felinos (String DNA) {
		super(DNA);
	}
	public void miar() {
		System.out.println("Miau...");
	}

	@Override
	public String toString() {
		return "Gatinhos [sangueQuente=" + sangueQuente + ", vive=" + vive + "]";
	}
}
