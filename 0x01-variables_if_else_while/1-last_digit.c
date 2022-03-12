#include<stdio.h>
#include<time.h>

/**
 * main - Assign a random number to int n and 
 * store a different value each time run
 *
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - Rand_MAX / 2;
if (Last digit of n > 5)
	printf("%d and is grater then 5\n", n);
else if (Last digit of n == 0)
	printf("%d and is 0\n", n);
else if (Last digit of n < == 6, n !==0)
	printf("%d and is less than 6 and not 0\n" n);

Return (0);
}
