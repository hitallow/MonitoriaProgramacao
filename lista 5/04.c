#include <stdio.h>

int main(void){
	char candidatoA[] = "Nome candidato A";
	char candidatoB[] = "Nome candidato B";
	char candidatoC[] = "Nome candidato C";
	int votosA = 0,votosB = 0, votosC = 0,nulos = 0;
	int seguir = 1;
	int op = 0;
	while(seguir == 1){
		printf("Você deseja votar em qual cadidato? \n");
		printf("[1]->  %s\n",candidatoA );	
		printf("[2]->  %s\n",candidatoB );
		printf("[3]->  %s\n",candidatoC );
		printf("[4] -> branco ou nulo\n");
		scanf("%d",&op);
		if(op == 1){
			printf("Você votou no candidato -> %s\n", candidatoA);
			votosA++;
		}else if(op == 2){
			printf("Você votou no candidato -> %s\n", candidatoB);
			votosB++;
		}else if(op == 3){
			printf("Você votou no candidato -> %s\n", candidatoC);
			votosC++;
		}else if(op == 4){
			printf("Você votou em branco");
			nulos++;
		}else{
			printf("Opção inválida\n");
		}

		printf("Deseja continuar votando? [1]-sim [2]-encerrar\n");
		scanf("%d",&seguir);
	}
	printf("%s -> %d\n", candidatoA, votosA);
	printf("%s -> %d\n", candidatoB, votosB);
	printf("%s -> %d\n", candidatoC, votosC);
	printf("Votos nulos -> %d\n", nulos);
	
	if(votosA > votosB && votosA>votosC){
		printf("%s é o vencedor \n",candidatoA );
	}else if(votosB > votosA && votosB>votosC){
		printf("%s é o vencedor \n",candidatoB );
	}else if(votosC> votosA && votosC > votosB){
		printf("%s é o vencedor \n",candidatoC );
	}

	return 0;
}