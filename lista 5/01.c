#include <stdio.h>

// resolução da questão 1 da lista
int main(){
	int resp;
	printf("Qual número deseja escolher: \n");
	scanf("%d",&resp);
	for(int i = 2 ; i!=resp; i++){
		if(resp%i == 0){
			printf("%d é dívisivel por %d\n",resp,i );
		}
	}
	return 0;
}