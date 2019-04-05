#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{	
	srand(time(NULL));
	int chances = 10, palpite =0 , numero = 0 ;
	numero = rand()%100;
	while(chances){
		printf("Digite seu palpite: ");
		scanf("%d",&palpite);
		if(palpite == numero){
			printf("Parabêns, você acertou!\n");
			break;
		}else if (palpite > numero )
		{
			printf("Tente um número mais baixo\n");
		}else{
			printf("Tente um número mais alto\n");
		}
		chances -- ;
	}
	if(chances == 0){
		printf("Você não acertou nenhuma!\n");
		printf("Você é muito ruim!\n");
		printf("O número era %d\n",numero );
	}

	return 0;
}