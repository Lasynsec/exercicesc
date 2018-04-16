#include <stdio.h>
#include <math.h>
#include "mathf.h"

int main(){
    int k = 0;
	int n = 1;
    double resultFac = 0.0;
	double resultSum = 0.0;
	double x = 2.0;
	double resultCos = 0.0;
	
	do{
			printf("Please type a number greater than 0 : ");
			scanf("%d",&k);
			if(k < 0){
				printf("Sorry but you have to type a number greater than 0\n");
			}

	}while(k < 0);

    //resultCos = cosinus(k);
	printf("factorial = %f\n",factorial(2));
	printf("factorial = %f\n",factorial(3));
	//printf("The cos of %d is %2.f\n",k,resultCos); 
//   printf("The partial sum  of %d and %2.f is %2.f\n",k,x,resultSum); 
//   printf("%2.f / %2.f = %f\n",resultSum,resultFac,resultCos);

    return 0;
}
