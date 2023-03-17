#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

int main() {
    srand(time(0));
    int n = rand();

    printf("Last digit of %d is ", n);

    int last_digit = n % 10;
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

    if (last_digit > 5) {
        printf("%d and is greater than 5\n", last_digit);
    } else if (last_digit == 0) {
        printf("%d and is 0\n", last_digit);
    } else {
        printf("%d and is less than 6 and not 0\n", last_digit);
    }
	int m;

    return 0;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
