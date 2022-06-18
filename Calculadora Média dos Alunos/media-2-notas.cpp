#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	setlocale(LC_ALL, "Portuguese");
	
	media = (nota1+nota2)/2;
	
	printf("\nA média do aluno é: %.1f", media);
	
	
	if(media >= 7){
		printf("\nO aluno foi APROVADO!");
	}else if(media >= 6){
		printf("\nO aluno está em RECUPERAÇÃO.");
	}else{
		printf("\nO aluno foi REPROVADO...");
	}
}
