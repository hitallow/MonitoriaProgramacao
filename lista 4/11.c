#include <stdio.h>
#include <string.h>

/*
	A biblioteca string.h ainda será estudada em sala.
	ainda não se preocupe com ela, apenas saiba que a função
	strcmp(string1, string2) compara a primeira string com a segunda
	caso elas sejam iguais, ela retorna um numero maior que 0
*/
int main(void)
{
	char sexo[2] ;
	unsigned int idade = 0;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	printf("Digite seu sejo [M] para Masculino [F] para feminino: ");
	scanf(" %s",sexo);
	if(idade >16){
		if (idade < 18 || idade >= 70)
		{
			printf("Seu voto é facultativo\n");
		}else{
			printf("Seu voto é obrigatório\n");
		}
	}else{
		printf("Você ainda não pode voltar\n");
	}
	

	if (idade>=18)
	{
		printf("Você responde legalmente por suas escolhas!\n");
		printf("Você pode possuir carteira de habilitação\n");
		if (strcmp(sexo,"M")+1)
		{
			printf("você deve se alistar no exercito militar\n");
		}
	}else{
		printf("Você ainda não responde legalmente por suas escolhas\n");
		printf("Você ainda não pode possuir CNH\n");

	}
	//printf("%d\n", strcmp(sexo,"M"));
	
	return 0;
}