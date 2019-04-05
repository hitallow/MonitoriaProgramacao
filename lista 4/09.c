#include <stdio.h>
int main(int argc, char const *argv[])
{
	int nota1 = 0, nota2 = 0,nota3 = 0,repo = 0, media;
	printf("Primeira nota: ");
	scanf("%d",&nota1);
	printf("segunda nota: ");
	scanf("%d",&nota2);
	printf("terceira nota: ");
	scanf("%d",&nota3);

	media = (nota1 + nota2 + nota3)/3;
	if(media >= 7 ){
		printf("aluno foi aprovado\n");

	}else if(media >= 5){
		printf("Aluno foi aprovado por nota\n");
	}else if(media > 3){
		printf("Qual sua nota na reposição: ");
		scanf("%d",&repo);
		if (nota1 < nota2 && nota1<nota3)
		{
			nota1 = repo;
		}else if (nota2 < nota1 && nota2 < nota3)
		{
			nota2 = repo;
		}else{
			nota3 = repo;
		}
		media = (nota1 + nota2 + nota3)/3;
		if (media> 7)
		{
			printf("Você foi aprovado, com média %d\n",media);
		}else{
			printf("Você foi reprovado, com média %d\n",media);
		}

	}else{
		printf("Você é muito burro, você foi reprovado!\n");
	}
	return 0;
}