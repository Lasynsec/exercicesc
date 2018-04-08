#include <stdio.h>
#include <math.h>
#include "mathf.h"

int main(){
    int k = 10;
    double resultFac = 0;

    resultFac = factorial(k);

   printf("The factorial of %d is %2.f\n",k,resultFac); 
    return 0;
}
