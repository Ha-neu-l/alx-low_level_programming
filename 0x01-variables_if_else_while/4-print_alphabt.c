#include <stdio.h>
/**
 * main - prints the alphabets other than q and e
 * Return: 0 (Succes)
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
alphabet++;
}
putchar('\n');
return (0);
}
