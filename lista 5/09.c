#include <stdio.h>
#define TRUE 1
int main(void)
{	
	int n1 = 0 , n2 = 0;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	int i = n1> n2 ? n1 : n2;
	while(i!=0){
		if(n1%i ==0 && n2%i == 0){
			printf("O MDC é %d\n",i);
			break;
		}
		i -- ;
	}
	return 0;
}