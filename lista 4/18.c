#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	float altura, peso_ideal ;
	char sexo[1];
	printf("Digite sua altura em centimetros: ");
	scanf("%f",&altura);
	printf("Digite seu sexo [M] masculino [F] feminino: ");
	scanf("%s",sexo);
	if(strcmp(sexo,"M")>-1){
		printf("primeiro laco\n");
		peso_ideal = (altura - 100 )- ((altura - 150)/4);
	}else{
		peso_ideal = (altura - 100 )- ((altura - 150)/2);

	}
	printf("Seu peso ideal é > %2.f\n",peso_ideal );
	return 0;
}