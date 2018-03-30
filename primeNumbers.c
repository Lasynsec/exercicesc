#include<stdio.h>
#include<math.h>

int main(){
    int userAnswer;
    int resultOdd;
    int i;


    do{ 
        printf("Type a number greater than 1 : ");
        scanf("%d",&userAnswer);

        if(userAnswer <= 1){
            printf("Sorry but the number you've typed is not greater than 1 !\n");
        }
    }while(userAnswer <= 1);
   
    if(userAnswer % 2 == 0 && userAnswer != 2){
        printf("%d is not prime number \n",userAnswer);
    } else if(userAnswer == 2){ 
        printf("%d is a prime number \n",userAnswer);
    }else {
        for(i = 1;i <= userAnswer; i+=2){
            if(i > 1){
                 resultOdd = (int) sqrt(userAnswer) % i;
                if(resultOdd == 0){ // If the number is even.  
                    printf("%d is not prime number, it can be divided by %d \n",userAnswer,i);
                 }else{
                    printf("%d is a prime number \n",userAnswer);
                }
            }
        }
    }
    return 0;
}
