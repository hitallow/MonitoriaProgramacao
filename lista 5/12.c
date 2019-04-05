#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	int jogC1 = 0, jogC2 = 0,jog3 = 0, resp =1;
	srand(time(NULL));
	while(resp==1){
		jogC1 = random()%2;
		jogC2 = random()%2;
		
		printf("Escolha entre 0 ou 1 ");
		scanf("%d",&jog3);
		printf("jogador numero 1 -> %d\n",jogC1 );
		printf("jogador numero 2 -> %d\n",jogC2 );
		printf("voce -> %d\n",jog3 );
		if( jogC1 == jog3 && jogC2 == jog3 && jogC2 == jogC1){
			printf("Houve um empate\n");
			if(jogC1){
				printf("Todos escolheram 1\n");
			}else{
				printf("Todos escolheram 0\n");
			}
		}else if(jogC1 == jogC2){
			printf("Parabêns, você ganhou\n");
		}else if(jogC1 == jog3){
			printf("O jogador 2 ganhou\n");
		}else {
			printf("O jogador 1 ganhou\n");
		}


		printf("Deseja jogar novamente? [1]-sim [2] não: ");
		scanf("%d",&resp);
	}
	printf("Espero você na próxima!\n");
	return 0;
}