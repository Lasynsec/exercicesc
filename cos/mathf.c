#include <stdio.h>
#include <math.h>
#include "mathf.h"
// Voir le développement en série cosinus méthode maclaurin.
double cosinus(int k){
    double resultFac = 1.0;
	double resultCos = 0.0; 
    int i;
	double x = 2.0;

    for(i = 0;i <= k;++i ){
			resultCos += (partialSum(x,i)/factorial(i)); 
		//	printf("partialSum is %2.f\n",partialSum(x,i)); 
			printf("factorial is %2.f\n",factorial(i)); 
		//	printf("resultCos is %2.f\n",resultCos); 
    }

    return resultCos;
}

double factorial(int k){
    double resultFac = 1.0;
	int i;

	printf("k=%d\n",k);	
	if(k > 0){
    	for(i = 1;i <= k;++i ){
        		resultFac *= i;
    	}
	}
	printf("ResultFac=%2.f\n",resultFac);
    return resultFac;
}

double partialSum(double x, int n){
    double SumResult = 0.0;
	int expo = 2*n;

	double powOne =0.0;
	double powTwo = 0.0;
	
	SumResult += (pow(-1,n) * pow(x,expo));
		
//	printf("(powOne(-1,%d) = %2.f  * powTwo(%2.f,(2*%d)) = %2.f) = %2.f\n",n,powOne,x,n,powTwo,SumResult);

    return SumResult;

}

