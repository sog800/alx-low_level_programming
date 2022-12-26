#include <stdio.h>
/**
 * main - testing
 *
 * Return: Always return 0
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	printf("in array a, the first(98) value is %d\n", a[0]);
	*(a + 1) = 198;
	printf("the second(198) value is %d\n", a[1]);
	*(a + 2) = 298;
	printf("the therd(298) value is %d\n", a[2]);
	a[3] = 398;
	printf("the forth(398) value is %d\n", a[3]);
	*(a + 4) = 498;
	printf("the fifth(498) value is %d\n", a[4]);
	p = a + 1;
	printf("p has the address of the second element in a\n");
	*p = 98;
	printf("using p second(98) has changed to %d\n", a[1]);
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("using p2 the value of the 4th value(1337) is now %d\n", a[3]);
	return (0);
}
