#include <stdio.h>

int div = 5;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % div == 0)
		{
			printf("%d is divisible by %d\n", i, div);
		}
	}




}
