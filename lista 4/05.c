#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ano = 0;
	printf("Digite o ano: ");
	scanf("%d",&ano);
	if((ano%4 == 0 && ano%100!=0) || (ano%400 == 0)){
		printf("Ano é bissexto\n");
	}else{
		printf("Ano não é bissexto\n");
	}
	return 0;
}