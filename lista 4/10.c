#include <stdio.h>
int main(int argc, char const *argv[])
{
	int dia = 0, mes = 0;

	printf("Digite o numero dos mês: ");
	scanf("%d",&mes);
	printf("Digite o dia: ");
	scanf("%d",&dia);
	// tratamento "leve" dos dados
	
	if ((dia > 31 || dia < 0 ) || (mes >12 || mes < 0))
	{
		printf("Dados Errados\n");
		return 0;
	}
	if(mes>= 3 && mes <= 6){
		if (dia >20 && dia< 21)
		{
			printf("Primavera\n");
		}else if(dia>21){
			printf("Verão\n");
		}else{
			printf("Inverno\n");
		}
	}else if(mes>=7 && mes <= 9){
		if(23 >dia){
			printf("Verão\n");
		}else{
			printf("Outono\n");
		}
	}else{
		printf("Inverno\n");
	}
	
	return 0;
}