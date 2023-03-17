#include <stdio.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
    int a;
    for (a = 0; a < 10; a++)
    {
        putchar(a + '0');
        if (a < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++digit;
	}
	putchar('\n');

	return (0);
}

