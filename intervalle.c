#include <stdio.h>

int main(){
    float x;

    printf("Type a float number : ");
    scanf("%f",&x);

    if(x >= -1 && x < 1){
        printf(" %.2f belongs to the I range\n",x);
    } else {
        printf("%.2f do not  belong to the I range\n",x);
    }

    return 0;
}
