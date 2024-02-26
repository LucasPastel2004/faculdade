package reinoAnimal;

public class Mamiferos
{
	public boolean sangueQuente, vive;
	public String DNA = "";
	
/*	public Mamiferos()
	{
		this.sangueQuente = true;
		this.vive = true;
		System.out.println("Vivendo!");
	}
	*/
	public Mamiferos(String DNA)
	{
		this.DNA = DNA;
		this.sangueQuente = true;
		this.vive = true;
		System.out.println("Vivendo!");
	}

	public void movimento()
	{
		System.out.print("Para interagir com ambiente...");
	}
	@Override
	public String toString() {
		return "Mamiferos [sangueQuente=" + sangueQuente + ", vive=" + vive + "]";
	}


	/*
	 * public static void main(String[] a) { Mamiferos exp = new Mamiferos(); }
	 */
}