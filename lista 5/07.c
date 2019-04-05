#include <stdio.h>

int main()
{
	int primeiro = 0, segundo = 1;
	int n = 0;
	printf("Tamanho de máximo : ");
	scanf("%d",&n);
	printf("\n");
	int num = 0;
	printf("1 ");
	while(primeiro + segundo<n){
		num = primeiro + segundo;
		printf("%d ",num);
		primeiro = segundo;
		segundo = num;

	}
	printf("\n");

	return 0;
}