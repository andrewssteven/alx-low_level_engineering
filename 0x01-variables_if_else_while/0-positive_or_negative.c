#include<stdio.h>
#include<time.h>
\*
*more header goes there
*
*betty style doc for function main goes there
*/
int main(void)
{
	int n;
	srand (time(0));
	n = rand() - RAND_MAX / 2;
if( n <= 0){
	printf("%d is a negative number\n", n);
	else 
	printf("%d is a positive number\n", n);
return (0);
