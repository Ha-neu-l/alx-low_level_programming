#include <stdio.h>
/**
 * main - this file prints all the alphabets
 * in lowercase
 * Return: 0 (Success)
 *
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
