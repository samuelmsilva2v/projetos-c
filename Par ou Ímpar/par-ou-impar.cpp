#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

int POI(int valor){
	setlocale(LC_ALL,"Portuguese");
	
	if(num % 2 == 0){
		printf("\nO n�mero %d � PAR.", valor);
	}else printf("\nO n�mero %d � �MPAR.", valor);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um n�mero para saber se � PAR ou �MPAR: ");
	scanf("%d", &num);
	
	POI(num);
}
