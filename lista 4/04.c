//para compilar esse codigo, execute:
// $ gcc 04.c -lm -o 04

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int numero = 0;
	float result =0 ;
	printf("Digite um numero : ");
	scanf("%d",&numero);

	if(numero < 0){
		printf("Não é possivel calcular a raiz quadrada de numeros negativos\n");
	}else{
		result = sqrt(numero);
		printf("a raiz quadrada de %d é %.2f\n",numero,result );
	}
	
	return 0;
}