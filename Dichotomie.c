#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define eps 0.0001

float f(float x)


{
	return exp(-x)-sqrt(x);
	
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c;
	printf("saisir a");
	scanf("%f",&a);
	printf("saisir b");
	scanf("%f",&b);
	if(f(a)*f(c)>0)
	printf("nombre paire de solution");
	else
	{
		do{
			c=(a+b)/2;
			if(f(a)*f(b)<0)
			b=c;
			else
			a=c;
		}
		
		while(fabs(f(c))>eps);
		printf("la solution est %f avec erreur de %f",c,f(c));
	}
	return 0;
}
