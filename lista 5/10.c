#include <stdio.h>
#define TRUE 1
int main()
{
	int n1 = 0 , n2 = 0;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	int i = 0;
	// if ternario!
	// considao //se // se não
	i = n1 > n2 ? n1 : n2;
	printf("%d\n",i );
	while(TRUE)
	{
		if(i%n1 ==0 && i%n2 ==0){
			printf("O minimo multiplo comum é %d\n",i );
			break;
		}
		i++;
	}
	

	return 0;
}