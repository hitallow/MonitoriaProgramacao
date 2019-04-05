#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char nome1[50], nome2[50];
	int idade1, idade2;

	printf("Nome da primeira pessoa: ");
	//scanf("%s",nome1);
	//fgets(nome1, 49, stdin);
	scanf(" %49[^\n]", nome1);
	//limpa o buffer
	//scanf("%*[^\n]");
	printf("Idade de %s: ", nome1);
	scanf("%d",&idade1);
	
	printf("Nome da segunda pessoa: ");
	//scanf("%s",nome2);
	//scanf("%*[^\n]");
	scanf(" %49[^\n]",nome2);
	//fgets(nome2, 49, stdin);
	//limpa o buffer
		
	printf("Idade de %s: ", nome2);
	scanf("%d",&idade2);
	
	if(idade1 == idade2){
		printf("%s e %s tem a mesma idade\n",nome1, nome2 );
	}
	else if(idade1 > idade2){
		printf("%s é mais velho(a) que %s\n",nome1,nome2 );
	}else{
		printf("%s é mais velho(a) que %s\n",nome2,nome1 );
	}
	return 0;
}