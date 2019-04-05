#include <stdio.h>
int main(void)
{
	int a;
	printf("Digite o valor: ");
	scanf("%d",&a);
	for (int i = 1; i < 10; i++)
	{
		if((a%i)==0){
			printf("%d é divisivel por %d\n",a,i );
		}
	}
	return 0;
}