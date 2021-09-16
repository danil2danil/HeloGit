#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <time.h>


int main() {

	int max_size, max_size2, i, j;
	srand((time(NULL)));
	printf("max number of str? ");
	scanf_s("%d", &max_size);
	printf("\nmax number of coll? ");
	scanf_s("%d", &max_size2);

	int** a = new int* [max_size];

	for (i = 0; i < max_size; i++)
	{
		a[i] = new int[max_size2];
	}


	for (i = 0; i < max_size; i++)
	{
		for (j = 0; j < max_size2; j++)
		{
			a[i][j] = rand() % 10;
		}
	}



	printf("\nyour array: \n");
	for (i = 0; i < max_size; i++)
	{
		for (j = 0; j < max_size2; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	_getch();
}