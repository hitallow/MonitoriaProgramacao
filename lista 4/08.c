#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int a = 0,b = 0,c= 0,delta, x1,x2;
	printf("o coeficiente de x²: ");
	scanf("%d",&a);
	printf("o coeficiente de x: ");
	scanf("%d",&b);
	printf("o coeficiente c: ");
	scanf("%d",&c);

	delta = pow(b,2) -4*a*c;
	if(delta< 0){
		printf("Não existem raizes reais para esta equação\n");
	}else if(delta == 0){
		printf("Existe uma raiz para esta equação\n");
		x1 = -b/2*a;
		printf("A raiz é %d\n",x1 );
	}else{
		printf("Existem duas raizes para esta equação\n");
		x1 = (-b+sqrt(delta))/2*a;
		x2 = (-b-sqrt(delta))/2*a;
		printf("A primeira raiz é:  %d\n",x1 );
		printf("A segunda raiz é:  %d\n",x2 );
	}
	return 0;
}