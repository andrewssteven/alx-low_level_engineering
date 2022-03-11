#include<stdio.h>
#include<time.h>
\**
* main : assigns random number to int n everytime
*
* betty style doc for function main goes there
*
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is a negative number\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("%d is negtive\n", n);
return (0);
}
