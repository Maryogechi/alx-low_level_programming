#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (yes)
 */
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
putchar(lc);
for (lc = 'A'; lc <= 'Z'; lc++)
putchar(lc);
putchar('\n');
return (0);
}
