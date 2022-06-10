#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int doa, valor;
	setlocale(LC_ALL,"Portuguese");
	
	printf("-------------------\n CRIANÇA ESPERANÇA\n-------------------\n");
	
	printf("[1] para doar R$ 10\n");
	printf("[2] para doar R$ 25\n");
	printf("[3] para doar R$ 50\n");
	printf("[4] para escolher outro valor\n");
	printf("[5] para cancelar\n\n");
	scanf("%d", &doa);
	
	if(doa == 1){
		printf("Obrigado! Você doou R$ 10!");
	}else if(doa == 2){
		printf("Obrigado! Você doou R$ 25!");
	}else if(doa == 3){
		printf("Obrigado! Você doou R$ 50!");
	}else if(doa == 4){
		printf("Digite o valor que deseja doar: ");
		scanf("%d", &valor);
		printf("Obrigado! Você doou R$ %d", valor);
	}else if(doa == 5){
		printf("Ok, tchau.");
	}
}
