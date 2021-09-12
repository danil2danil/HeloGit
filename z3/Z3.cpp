#include <stdio.h>
#include <conio.h>
#include <malloc.h>


int main() {
	int* a;
	int max_size, i;

	printf("max number of elements? ");
	scanf_s("%1d", &max_size);

	a = (int*)malloc(max_size * sizeof(int));
	printf("\nenter %d numbers:\n", max_size);

	for (i = 0; i < max_size; i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("\nyour array: ");
	for (i = 0; i < max_size; i++)
	{
		printf("%d ", a[i]);
	}
	_getch();
}