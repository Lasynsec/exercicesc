#include <stdio.h>

int main()
{
	int y;
	int x;

	float a,b,c,d;

	x = 2;
	y = 4;

	a = x + y;
	b = x - y;
	c = x * y;
	d = (float) x / y;

	printf("%d + %d = %.2f\n",x,y,a);
	printf("%d - %d = %.2f\n",x,y,b);
	printf("%d * %d = %.2f\n",x,y,c);
	printf("%d / %d = %.2f\n",x,y,d);

	return 0;
}
