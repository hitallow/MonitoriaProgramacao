#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{	
	srand(time(NULL));
	int chances = 10, palpite =0 , numero = 0, anterior = 0, flag = 0, maior =0;
	numero = rand()%100;
	anterior = numero;
	printf("-> sort %d\n",numero );
	while(chances){
		printf("Digite seu palpite: ");
		scanf("%d",&palpite);

		if(flag){
			if(maior){
				if(palpite > anterior){
					printf("Você é muito burro, era um número maior \n");
					break;
				}
			}else{
				if(palpite < anterior){
					printf("Você é muito burro, era um número menor \n");
					break;
				}
			}
		}

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
		flag = 1;
		printf("anterior > %d\n",anterior );
	}



	if(chances == 0){
		printf("Você não acertou nenhuma!\n");
		printf("Você é muito ruim!\n");
		printf("O número era %d\n",numero );
	}

	return 0;
}