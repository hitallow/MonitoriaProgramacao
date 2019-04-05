#include <stdio.h>

int isPrime(int num){
	int count = 0;
	for(int i = 1 ; i<=num; i++){
		if(num%i == 0){
			count++;
		}
	}
	if(count == 2){
		return 1;
	}
	return 0;
}
int main()
{
	int n = 0, flag = 1, som = 0;
	
	for(int i = 0; i<=n; i++){
		if(isPrime(i)){
			
		}

	}

	return 0;
}