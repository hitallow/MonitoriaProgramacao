#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numero =0 ;	
	printf("Digite um numero: ");
	scanf("%d",&numero);

	if (numero%2 == 0 )
	{
		printf("%d é par \n",numero );
	}else{
		printf("%d é ímpar \n", numero);
	}
	if(numero == 0){
		printf("%d é nulo\n",numero );
	}else if(numero > 0){
		printf("%d é positivo\n",numero );
	}else{
		printf("%d é negativo\n", numero);
	}

	return 0;
}