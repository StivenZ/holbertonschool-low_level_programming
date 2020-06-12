#include <stdio.h>
/**
 * main - prints semi lowercase and uppercase alphabet
 * Return: newline
*/
int main(void)
{
char az;
char azcap;
for (az = 'a'; az <= 'z'; az++)
{
putchar(az);
}
for (azcap = 'A'; azcap <= 'Z'; azcap++)
{
putchar(azcap);
}
putchar('\n');
return (0);
}
