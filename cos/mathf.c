#include <stdio.h>
#include <math.h>
#include "mathf.h"

double factorial(int k){
    double result = k;
    int i;

    for(i = (k - 1);i >= 1;--i ){
        result *= i;
    }

    return result;
}

