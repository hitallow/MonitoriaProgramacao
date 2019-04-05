#include <stdio.h>

int main()
{
	int primeiro = 0, segundo = 1;
	int op = 0;
	printf("Tamanho de n: ");
	scanf("%d",&op);
	int i = 0;
	printf("\n");
	while(i<=op){
		int num = primeiro + segundo;
		printf("%d ",num);
		primeiro = segundo;
		segundo = num;
		i++;
	}
	printf("\n");
	return 0;
}