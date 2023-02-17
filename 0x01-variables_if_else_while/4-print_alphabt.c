#include <stdio.h>
/**
* main - except
* Return: 0(success)
*/

int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != q && i != e)
	putchar(i);
	}
	putchar('\n');

	return(0);

}
