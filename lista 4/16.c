#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b;
	printf("Digite o primeiro numero: ");
	scanf("%d",&a);
	printf("Digite o segundo numero: ");
	scanf("%d",&b);
	// propriedade de negação, onde o "!" nega a sentença
	if(!(a%b)){
		printf("%d é divisivel por %d\n",a,b );
	}
	if(!(b%a)){
		printf("%d é divisivel por %d\n",b,a );
	}
	return 0;
}