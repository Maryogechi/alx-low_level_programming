#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (yes)
 */
int main(void)
{
int a;
char p;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (p = 'a'; p  <= 'f'; p++)
putchar(p);
putchar('\n');
return (0);
}
