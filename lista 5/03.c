#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Primeiro número do intervalo: ");
	scanf("%d",&a);
	printf("Segundo número do intervalo:");
	scanf("%d",&b);


	for(int i = a ; i <=b; i++){
		int somaValores = 0;
		for(int j =1;j<=i; j ++){
			if(i%j == 0 ){
				somaValores += j;
			}
		}
		if (somaValores == 2*i)
		{
			printf("o número %d é primo \n",i );
		}
	}
	return 0;
}