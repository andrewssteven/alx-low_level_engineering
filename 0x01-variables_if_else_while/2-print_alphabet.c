#include<stdio.h>
#include<stdlib.h>
#include<limit.h>
/**
 * main - print alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n')
return (0);
}
