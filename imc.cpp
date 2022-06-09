#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float peso, alt, imc;

	printf("-------------------------\n  CALCULADORA DE IMC\n INDICE DE MASSA CORPORAL\n-------------------------");
	
	printf("\nDigite o peso do paciente (kg): ");
	scanf("%f", &peso);
	printf("Digite a altura do paciente (m): ");
	scanf("%f", &alt);
	
	imc = (peso/alt)/alt;
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nO IMC do Paciente �: %.1f", imc);
	
	if(imc < 18.5){
		printf("\nO paciente est� ABAIXO DO PESO.");
	}else if(imc < 25){
		printf("\nO paciente est� com o PESO NORMAL.");
	}else if(imc < 30){
		printf("\nO paciente est� com SOBREPESO.");
	}else if(imc < 40){
		printf("\nO paciente est� com OBESIDADE.");
	}else{
		printf("\nO paciente est� com OBESIDADE GRAVE.");
	}
	
	return 0;
	
}


