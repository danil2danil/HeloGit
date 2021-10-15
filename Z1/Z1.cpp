#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int max_size = 7, i, j, start;
bool* vektor = (bool*)malloc(max_size * sizeof(bool));

void DFS(int st, int** b, int num_of_elem, bool* visited) {
	int g;
	printf("%d ", st+1);
	visited[st] = true;
	for (g = 0; g < max_size; g++) {
		if (b[st][g] != 0 && !visited[g])
			DFS(g, b, num_of_elem, visited);
	}
}

void DFS_noRekr(int st, int** b, int num_of_elem)
{
	queue<int> Q;

	int* mass;
	int t;


}

int main() {
	
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	

	int** a = new int* [max_size];
	for (i = 0; i < max_size; i++)
	{
		a[i] = new int[max_size];
	}

	for (i = 0; i < max_size; i++)
	{
		for (j = i + 1; j < max_size; j++)
		{
			a[i][j] = rand() % 2;
			a[j][i] = a[i][j];
		}
	}

	for (i = 0; i < max_size; i++)
	{
		vektor[i] = false;
		for (j = 0; j < max_size; j++)
		{
			if (i == j)
				a[i][j] = 0;
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	
	
	///////////////////////////////////////

	printf("\nОбход графа в глубину методом рекурсии\ncтартовая вершина - ");
	scanf_s("%d", &start);
	printf("Вывод: ");
	DFS(start-1, a, max_size, vektor);

	printf("\n");

	printf("\nОбход графа в глубину методом без рекурсии\ncтартовая вершина - ");
	scanf_s("%d", &start);
	printf("Вывод: ");
	DFS_noRekr(start-1, a, max_size);

	_getch();
}