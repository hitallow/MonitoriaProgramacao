#include <stdio.h>
int main()
{
	int mes = -1;
	printf("Digite o numero do mes: ");
	scanf("%d",&mes);
	switch(mes){
		case 1:
			printf("Mes de janeiro\n");
			break;
		case 2:
			printf("Mes de fevereiro\n");
			break;
		case 3:
			printf("Mes de março\n");
			break;
		case 4:
			printf("Mes de abril\n");
			break;
		case 5:
			printf("Mes de maio\n");
			break;
		case 6:
			printf("Mes de junho\n");
			break;
		case 7:
			printf("Mes de julho\n");
			break;
		case 8:
			printf("Mes de agosto\n");
			break;
		case 9:
			printf("Mes de setembro\n");
			break;
		case 10:
			printf("Mes de outubro\n");
			break;	
		case 11:
			printf("Mes de novembro\n");
			break;
		case 12:
			printf("Mes de dezembro\n");
			break;
		default:
			printf("Você tem certeza que digitou certo?\n");
	}
	return 0;
}