#include <stdio.h>
#include <math.h>

int main(){
    float userReelNumber;
    float resultExpressionOne;
    float resultExpressionTwo;
    float resultExpressionThree;
    float resultExpressionFour;

    printf("Please type a real number : ");
    scanf("%f",&userReelNumber);

    resultExpressionOne = (userReelNumber/1) - exp(userReelNumber);
    printf("Expression 1 = %f\n",resultExpressionOne);
    
    if(userReelNumber > 0){
        resultExpressionTwo = userReelNumber * log(userReelNumber) * exp(2/userReelNumber-1);
    printf("Expression 2 = %f\n",resultExpressionTwo);
    }else {
        printf("Expression 2 is undefined\n");
    }
    
    if(userReelNumber != 2){
        resultExpressionThree = - userReelNumber - sqrt(pow(userReelNumber,2) - 8 * userReelNumber) / 2 - userReelNumber;
        printf("Expression 3 = %f\n",resultExpressionThree);
    } else {
        printf("Expression 3 is undefined\n");
    }


   if(userReelNumber > 0){
        resultExpressionFour = sqrt((sin(userReelNumber) - userReelNumber/20) * log(pow(userReelNumber,2) - 1/userReelNumber));
        printf("Expression 4 = %f\n",resultExpressionFour);
   }else {
        printf("Expression 4 is undefined\n");              
   }
    return 0;
}
