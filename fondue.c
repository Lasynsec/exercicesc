#include <stdio.h>
#include <string.h>

#define NB_GUEST 4

int main()
{
	float cheese = 800.0;
	float water = 2.0;
	float garlic = 2.0;
	float bread = 400.0;
	int numberOfGuest = 0;

	printf("How many people will come for lunch this evening ? ");
	scanf("%d",&numberOfGuest);

	cheese = (cheese * numberOfGuest / NB_GUEST);
	water = (water * numberOfGuest / NB_GUEST);
	garlic = (garlic * numberOfGuest / NB_GUEST);
	bread = (bread * numberOfGuest / NB_GUEST);

	printf("To make the the fondue for %d people, you will need :\n",numberOfGuest);
	printf("- %.2f gr of cheese\n",cheese);
	printf("- %.2f dl of water\n",water);
	printf("- %.2f clove of garlic\n",garlic);
	printf("- %.2f gr of bread\n",bread);

	return 0;
}
