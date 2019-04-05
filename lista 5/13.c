#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escolha(int op){
	if(op == 1)
		printf("Pedra\n");
	else if (op ==2)
		printf("Papel\n");
	else 
		printf("Tesoura\n");
}

int main(void)
{
	srand(time(NULL));
	int computador = 0, jogador = 0, op = 1;
	
	while(op == 1){
		computador = rand()%3+1;
		printf("Escolha sua opçãp\n");
		printf("[1] Pedra\n");
		printf("[2] Papel\n");
		printf("[3] Tesoura\n");
		scanf("%d",&jogador);
		printf("Jogador escolheu => ");
		escolha(jogador);
		printf("Computador escolheu => ");
		escolha(computador);
		if(computador == jogador){
			printf("Empate!\n");
		}else if(computador == 1){
			if(jogador == 3){
				printf("Computador venceu!\n");
			}else{
				printf("Jogador venceu\n");
			}
		}else if(computador == 2){
			if (jogador == 1)
			{
				printf("Computador venceu\n");
			}else
			{
				printf("Jogador venceu\n");
			}
		}else if (computador == 3)
		{
			if (jogador == 2)
			{
				printf("Computador venceu!\n");
			}else{
				printf("Jogador venceu\n");
			}
		}

		printf("Deseja jogar novamente? \n[1]sim [2]não: ");
		scanf("%d",&op);
	}

	return 0;
}