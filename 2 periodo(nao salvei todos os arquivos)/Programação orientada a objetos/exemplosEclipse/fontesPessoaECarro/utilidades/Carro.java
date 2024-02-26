package utilidades;

public class Carro {
	//Provendo Encapsulamento
	private String placa;
	private String chassis;
	
	public Carro(){
		
	}
	
	//Construtor completo
	public Carro(String placa, String chassis){
		this.placa = placa;
		this.chassis = chassis;
	}
	
	public String toSTring() {
		return this.placa + this.chassis;
	}
	
	public void setPlaca(String placa) {
		//if placa valida então
		this.placa = placa;
		//senão erro!!
	
	}
	
	public void setChassis(String chassis) {
		//Teste para verificar se o chassis é valido
		this.chassis = chassis;
		//senão erro!!
	}
	public String getPlaca() {
		return this.placa;
	}
	
	public String getChassis() {
		return this.chassis;
	}
}
