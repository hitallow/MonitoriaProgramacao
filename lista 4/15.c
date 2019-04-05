#include <stdio.h>

int main(int argc, char const *argv[])
{
	int op = 0;
	printf("Digite o dia em valor decimal: ");
	scanf("%d",&op);
	switch(op){
		case 0:
			printf("Domingo\n" );
			break;
		case 1:
			printf("Segunda\n");
			break;
		case 2:
			printf("Terça\n");
			break;
		case 3:
			printf("Quarta\n");
			break;
		case 4:
			printf("Quinta\n");
			break;
		case 5:
			printf("Sexta\n");
			break;
		case 6:
			printf("Sabádo\n");
			break;
		default:
			printf("Você tem certeza que digitou certo?\n");
	}
	return 0;
}