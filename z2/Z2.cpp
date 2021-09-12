#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define SIZEOFMASS 10

int main() {
	srand(time(NULL));
	int i, a[SIZEOFMASS];
	printf("initial array: ");
	for (i = 0; i < SIZEOFMASS; i++)
	{
		a[i] = rand() % 100;
		printf("%d ", a[i]);
	}
	_getch();
}