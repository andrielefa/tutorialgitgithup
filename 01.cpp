#include <stdio.h>

int main(void)

{
	double nota1, nota2, media;
	printf("digite a primeira nota do aluno: ");
	scanf("%f",&nota1);
	
	printf("digite a segunda nota do aluno: ");
	scanf("%f",&nota2);
	
	media= (nota1 + nota2) / 2;
	
	printf("media do aluno= %f\n",media);
	
	return 0;
} 