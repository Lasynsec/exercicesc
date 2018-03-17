#include <stdio.h>
#include <string.h>

int main(){
	int age = 0;
	int birthYear = 0;
	int currentYear = 2018;

	printf("How old are you ? : ");
	scanf("%d",&age);

	birthYear = currentYear - age;
	printf("Your are born in %d !\n",birthYear);



	return 0;
}
