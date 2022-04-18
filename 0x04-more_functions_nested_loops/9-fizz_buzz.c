#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
<<<<<<< HEAD
	int n;


	n = 1;
	printf("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");


	return (0);
=======

int p = 100;
int i;

i = 1;
while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}

else if (i % 3 == 0)
{
printf("Fizz ");
}

else if (i % 5 == 0)
{
if (i < p)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", i);
}

i++;


}
printf("\n");
return (0);
>>>>>>> 93f1bcc8dad6204fb4a1c4fa14382ed5e6e8b956
}
