#include <stdio.h>
#include <math.h>
int main(void)
{	
	float notaMaxima = -1, 
		notaMinima = 11, 
		somaNotas = 0,
		media = 0, 
		notaAtual = 0,
		dp =0;
	int  
		votantes = 0,
		op = 1;

	while(op == 1){
		printf("Qual sua nota? ");
		scanf("%f",&notaAtual);
		if(notaAtual> 10 || notaAtual < 0){
			printf("Opção inválida, voto não computado!\n");
		}else{
			votantes++;
			if(notaAtual> notaMaxima){
				notaMaxima = notaAtual; 
			}
			if(notaAtual < notaMinima){
				notaMinima = notaAtual;
			}
			somaNotas+=notaAtual;
		}
		printf("Deseja continuar votando? \n[1] continuar [2] encerrar\n");
		scanf("%d",&op);
	}
	media = somaNotas / votantes;
	dp = sqrt(pow(somaNotas-media,2)/votantes);
	printf("Desvio padrao %.1f\n", dp);
	printf("Media %.1f\n",media );
	printf("nota maxima %.1f\n",notaMaxima);
	printf("nota nota minima %.1f\n", notaMinima);
	printf("total de votantes %d\n", votantes);
	return 0;
}