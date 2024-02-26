package reinoAnimal;

public class Caninos extends Mamiferos {
	private String TipoPupila = "Redonda";
	private String dono = "";
	
	/*
	 * public Caninos() {
	 * 
	 * }
	 */
	
	public Caninos(String dono, String DNA) {
		super(DNA);
		this.dono = dono;
		System.out.println("Passei no construtor de canino....");
	}
	
	public void latir() {
		System.out.println("latindo... au... au...");
	}
	public void cavar() {
		System.out.println("Cavando...");
	}

	@Override
	public String toString() {
		return "Caninos [TipoPupila=" + TipoPupila + ", dono=" + dono + ", sangueQuente=" + sangueQuente + ", vive="
				+ vive + ", DNA=" + DNA + "]";
	}
	
}
