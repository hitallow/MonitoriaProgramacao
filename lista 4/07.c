#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n1,n2,n3;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&n3);

	printf("A seguencia é> ");
	if(n1<n2 && n1<n3){
		printf("%d\t",n1);
		if(n2<n3){
			printf("%d\t",n2 );
			printf("%d\t",n3 );
		}else{
			printf("%d\t",n3 );
			printf("%d\t",n2 );
		}
	}else if(n2< n1 && n2<n3){
		printf("%d\t",n2 );
		if(n1<n3){
			printf("%d\t",n1 );
			printf("%d\t",n3 );
		}else{
			printf("%d\t",n2 );
			printf("%d\t",n1 );
		}
	}else{
		printf("%d\t",n3 );
		if(n1<n2){
			printf("%d\t",n1 );
			printf("%d\t",n2 );
		}else{
			printf("%d\t",n2 );
			printf("%d\t",n1 );
		}
	}
	printf("\n");
	return 0;
}