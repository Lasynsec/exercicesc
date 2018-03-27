#include <stdio.h>

int main(){
    int i;
    int j;
    int multiplyResult;

    for(i = 1; i < 11; ++i){
        printf ("Table of %d\n",i);
        for(j=1; j < 11; ++j){
            multiplyResult = i * j;
            printf("%d * %d = %d\n",i,j,multiplyResult);
        }
    }
    return 0;
}
