#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int chances = 7, numero = 0, nCompt= 0, op;
	printf("Qual numero ? \n");
	scanf("%d",&numero);
	nCompt = rand()%100;
	while(chances){
		printf("O número é %d\n",nCompt );
		printf("Acertou? [1]sim [2] nao\n");
		scanf("%d",&op);
		if(op == 1){
			printf("Foi bom brincar com você!\n");
		}else{
			printf("O palpite foi \n[1] maior que numero \n[2] menor que o numero\n");
			scanf("%d", &op);
			if(op == 1){
				nCompt = rand()%nCompt- 1;
			}else{
				nCompt = nCompt+(rand()%nCompt);
			}

		}
		chances -- ;
	}
	return 0;
}