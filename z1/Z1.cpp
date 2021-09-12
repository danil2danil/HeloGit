#include <stdio.h>
#include <conio.h>

int find_max(int* b)
{
	int i, max = 0;
	for (i = 0; i < 8; i++)
	{
		if (b[i] > max)
		{
			max = b[i];
		}
	}
	return max;
}
int find_min(int* b)
{
	int i, min = 100;
	for (i = 0; i < 8; i++)
	{
		if (b[i] < min)
		{
			min = b[i];
		}
	}
	return min;
}


int main() {
	int a[8] = { 9, 5, 20, 10, 14, 16, 18, 8 };
	int c, d;
	printf("intial array: ");
	for (c = 0; c < 8; c++) {
		printf("%d ", a[c]);
	}
	c = find_max(a);
	d = find_min(a);
	printf("\nMax = %d Min = %d\nMax - Min = %d\n", c, d, c - d);
	_getch();
}