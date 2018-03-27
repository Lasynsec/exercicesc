#include <stdio.h>
#include <math.h>

#define G 9.81
int main(){
    float speedBeforeBounce;// ask it to the user
    float speedAfterBounce;
    float startHeight;
    float endHeight;
    float eps; // ask it to the user
    float *heightPtr = NULL;
    int nbrOfBouncing; // ask it to the user
    int *nbrOfBouncingPtr; // ask it to the user
    int i;
    

   do{
        printf("Type a starting height : ");
        scanf("%f",&startHeight);
    }while(startHeight < 1);
    heightPtr = &startHeight;

   do{
        printf("Type the bounce coeficient: ");
        scanf("%f",&eps);
   }while(eps > 0.99 || eps < 0);

    printf("Type the end of height: ");
    scanf("%f",&endHeight);
    
    nbrOfBouncingPtr = &nbrOfBouncing;

    do{
        //for(i = 0; i < nbrOfBouncing; i++){
        //printf("Bouncing number %d\n",i);           
        speedBeforeBounce = sqrt(2*(*heightPtr)*G);
        speedAfterBounce = eps * speedBeforeBounce;
        *heightPtr = pow(speedAfterBounce,2) / (2*G);
        (*nbrOfBouncingPtr)++;
        printf("endheight = %.2f: \n",endHeight);
        printf("eightPtr = %.2f: \n",*heightPtr);
    }while(*heightPtr >= endHeight);
    
    printf("The height after %d bounce is %.2f\n",*nbrOfBouncingPtr,*heightPtr);

    return 0;
}
