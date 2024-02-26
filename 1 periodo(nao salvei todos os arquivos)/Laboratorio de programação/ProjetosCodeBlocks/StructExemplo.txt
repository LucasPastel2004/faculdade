#include <stdio.h>
#include <string.h>

struct Empregado
{
  int Empregado_ID;
  int idade;
  char Nome[50];
  char Departamento[20];
  float Salario;
};

int main()
{
  struct Empregado emp1 = { 101, 25, "David", "TI", 25000.50 };
  struct Empregado emp2;

     emp2.Empregado_ID = 102;
     emp2.idade = 28;
     strcpy(emp2.Nome, "Cristiano");
     strcpy(emp2.Departamento, "Ciencias");
     emp2.Salario = 32000.70;

  printf(" Detalhes do  Empregado1 \n " );
  printf(" Empregado Id = %d \n ", emp1.Empregado_ID );
  printf(" Empregado idade = %d \n ", emp1.idade );
  printf(" Empregado Nome = %s \n ", emp1.Nome );
  printf(" Empregado Departamento = %s \n ", emp1.Departamento );
  printf(" Empregado Salario = %.2f \n\n ", emp1.Salario );

  printf(" Detalhes do empregado Empregado2 \n " );
  printf(" Empregado Id = %d \n ", emp2.Empregado_ID );
  printf(" Empregado idade = %d \n ", emp2.idade );
  printf(" Empregado Nome = %s \n ", emp2.Nome );
  printf(" Empregado Departamento = %s \n ", emp2.Departamento );
  printf(" Empregado Salario = %.2f \n ", emp2.Salario );

  return 0;
}
