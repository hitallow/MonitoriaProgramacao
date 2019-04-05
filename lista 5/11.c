#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	int dado1 = 0, dado2 = 0, sum = 0, resp =1;
	srand(time(NULL));
	while(resp==1){
		dado1 = random()%12 +1;
		dado2 = random()%12 +1;
		sum = dado1+dado2;
		printf("A soma dos dados foi %d\n",sum );
		if(sum == 7 || sum == 11 ){
			printf("Parabêns, você ganhou\n");
		}else{
			printf("Desculpa, você é um derrotado!\n");
		}
		printf("Deseja jogar novamente? [1]-sim [2] não");
		scanf("%d",&resp);
	}
	printf("Espero você na próxima!\n");
	return 0;
}