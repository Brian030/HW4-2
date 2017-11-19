#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2,4,6,8,10,12,89,68,45,37 };
	int pass;
	int i, j = SIZE, k, z=0, b;
	int hold;
	puts("Date items in original order");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	puts("");

	for (pass = 0; pass < SIZE-1; ++pass)
	{
		for (i = 0; i < j - 1; ++i)
		{
			b = z;
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				z += 1;
			}
		}
		if (b == z) { break; }
		j -= 1;
	}

	puts("\nData items in ascending order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	puts("");

	system("pause");
	return 0;
}
