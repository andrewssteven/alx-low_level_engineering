#include"main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet(void)

{
	char ch;

	ch = 'a';

while (ch <= 'z')
{
_putcha(ch);
ch++;
}
_putchar('\n');
}
