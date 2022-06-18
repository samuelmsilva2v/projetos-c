#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int cont, num, soma, media, div5, nulo, somaPar;
	setlocale(LC_ALL, "Portuguese");
	
	soma = 0;
	media = 0;
	div5 = 0;
	nulo = 0;
	somaPar = 0;
	
	for(cont = 1; cont <= 5; cont++){
		printf("Digite um número: ");
		scanf("%d", &num);
		
		soma = soma + num;
		media = (soma / 5);
		
		if(num % 5 == 0){
			div5 = div5 + 1;
		}
		if(num == 0){
			nulo = nulo + 1;
		}
		if(num % 2 == 0){
			somaPar = somaPar + num;
		}
	}
	
	printf("\n A soma dos números digitados: %d", soma);
	printf("\n\nA média dos números digitados é: %d", media);
	printf("\n\nForam digitados %d números divisíveis por 5.\n", div5);
	printf("\nForam digitados %d números nulos.\n", nulo);
	printf("\nA soma dos números pares digitados é: %d", somaPar);
	
}
