#include <stdio.h>

int main(int argc, char const *argv[])
{
	char nome1[50], nome2[50];
	int idade1 = 0, idade2 = 0, dif = 0;

	printf("Digite o nome da primeira pessoa: ");
	scanf(" %49[^\n]",nome1);
	printf("Digite a idade de %s: ", nome1 );
	scanf(" %d",&idade1);

	printf("Digite o nome da segunda pessoa: ");
	scanf(" %49[^\n]",nome2);
	printf("Digite a idade de %s: ", nome2 );
	scanf("%d",&idade2);

	// pode ser usado o if ternario simplismente pra multiplicar o valor por -1
	dif = idade1 - idade2;
	dif = 0>dif? dif *-1: dif;
	//tbm pode ser usado o if pra calcular em cada caso

	//dif =  idade1 > idade2? idade1 - idade2: idade2 - idade1;
	printf("A diferenca em anos dos dois é: %d\n",dif); 
	
	return 0;
}