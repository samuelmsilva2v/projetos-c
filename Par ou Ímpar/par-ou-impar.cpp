#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

int POI(int valor){
	setlocale(LC_ALL,"Portuguese");
	
	if(num % 2 == 0){
		printf("\nO número %d é PAR.", valor);
	}else printf("\nO número %d é ÍMPAR.", valor);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número para saber se é PAR ou ÍMPAR: ");
	scanf("%d", &num);
	
	POI(num);
}
