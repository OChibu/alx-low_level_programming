#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z';
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}