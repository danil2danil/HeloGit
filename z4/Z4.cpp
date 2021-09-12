#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
	srand(10);
	int const m = 5, n = 5;
	int a[m][n], i, j, sum_str = 0, sum_col = 0;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10;
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum_str += a[i][j];
		}
		printf("summ of %d str = %d\n", i + 1, sum_str);
		sum_str = 0;
	}
	printf("\n");

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
		{
			sum_col += a[i][j];
		}
		printf("summ of %d col = %d\n", j + 1, sum_col);
		sum_col = 0;
	}
}