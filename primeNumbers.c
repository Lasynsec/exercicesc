#include<stdio.h>
#include<math.h>

int main(){
    int userAnswer;
    int result;
    int i;

    do{ 
        printf("Type a number greater than 1 : ");
        scanf("%d",&userAnswer);

        if(userAnswer <= 1){
            printf("Sorry but the number you've typed is not greater than 1 !\n");
        }
    }while(userAnswer <= 1);
    
    for(i = 1;i <= userAnswer; i+=2){
        if(i > 1){
            result = (int) sqrt(userAnswer) % i;
           // if( (sqrt(userAnswer) % i == 0){
           //     printf("Sorry but %d is not a prime number",userAnswer);
           // }
           //
           printf("modulo result %d\n",result);
        }
    }
    return 0;
}
    
