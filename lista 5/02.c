#include <stdio.h>
#include <math.h>


//verifica se o número é primo
int isPrime(int num){
	int count = 0;
	for(int i = 1 ; i<=num; i++){
		if(num%i == 0){
			count+=1;
		}
	}
	if(count == 2){
		return 1;
	}
	return 0;
}
int main(void)
{
	int n1, n2;
	printf("O primeiro número do intervalo: ");
	scanf("%d",&n1);
	printf("segundo número do intervalo: " );
	scanf("%d",&n2);
	//pega o intervalo
	for(int i = n1; i<=n2; i++){
		if(isPrime(i)){
			printf("%d \t",i );
		}
	}
	printf("\n");
	return 0;
}