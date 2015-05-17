#include <stdio.h>
#include <math.h>

int main(void)
{
	int x = 0, y = 0, z = 0;
	scanf_s("%d %d", &x, &y);

	int sqrt_y = (int)sqrt((double)y);
	
	int sqrt_x = (int)sqrt((double)x);
	if (sqrt_x*sqrt_x == x)
		sqrt_x -= 1;
	z = y - sqrt_y - x + sqrt_x;
	
	printf("%d", z+1);
}