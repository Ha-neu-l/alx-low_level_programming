#include <stdio.h>
/**
 * main - prints all aplgpabets in lowaercase then uppercase
 * Return: 0 (Success)
 */
int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
