#include <stdio.h>

int main(){
    float x;

    printf("Please enter a float number : ");
    scanf("%f",&x);
    
    if(((x < 3) && !(x < 0.1 )) || ((x < -2) || x == -2) && (!(x < -10) || (x == -10))){
        printf("x is in the range !\n");
    } else {
        printf("x is not in the range !\n");
    }
    return 0;
}
