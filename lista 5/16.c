#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{	
	srand(time(NULL));
	int chances = 10, palpite =0 , numero = 0, anterior = 0, maior =0;
	numero = rand()%100;

	while(chances){
		printf("%d\n",chances );
		printf("Digite seu palpite: ");
		scanf("%d",&palpite);
		// verifica se o novo palpite esta dentro do intervalo
		if(chances!=10){
			if(maior){
				if(palpite > anterior){
					printf("Você é muito burro, era um número maior \n");
					chances = 0 ;
					break;
				}
			}else{
				if(palpite < anterior){
					printf("Você é muito burro, era um número menor \n");
					chances = 0 ;
					break;
				}
			}
		}
		// verifica se acertou ou errou
		if(palpite == numero){
			printf("Parabêns, você acertou!\n");
			break;
		}
		else if (palpite > numero){
			printf("Tente um número mais baixo\n");
			maior = 1;
		}else if(palpite < numero){
			printf("Tente um número mais alto\n");
			maior = 0;
		}
		anterior = palpite; 
		chances -- ;
		
		printf("anterior > %d\n",anterior );
	}



	if(chances > 7 ){
		printf("Você teve muita sorte\n");
	}else if( chances > 5){
		printf("Você joga bem, mas ainda contou com a sorte\n");
	}else if(chances > 3){
		printf("Você é um bom estrategista\n");
	}else if( chances > 1){
		printf("Verifique sua estrategia antes de jogar novamente\n");
	}else{
		printf("Você não acertou nenhuma!\n");
		printf("Você é muito ruim!\n");
		printf("O número era %d\n",numero );
	}

	return 0;
}