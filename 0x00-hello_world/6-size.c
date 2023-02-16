#include <stdio.h>
/**
*main - a program that prints the size of various types
*Return: 0(successful)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(%)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(%)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte(%)\n", (unsigned long)sizeof(c);
printf("Size of long long int: %lu byte(%)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(%)\n", (unsigned long)sizeof(f));
return (0);
}
