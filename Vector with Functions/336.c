#include <stdio.h>

void func_336(int X[], int N);

void print(int Y[], int len);


int main()
{
   //int N = 8;
   int X[] = { -1, 2, -3, 4, 5, 2, 121, -1};
	int N = sizeof(X) / sizeof(int);
 
   func_336( X,  N);

   return 0;
}


void func_336(int X[], int N) {
	int Y[N];
	int len = 0;

	for (int i = 0; i < N; i++)
	{
		int j;
		for (j = 0; j < N; j++)
		{
			if (i != j && X[i] == X[j]) {
				break;
			}

		}
		if (j == N)
		{
			Y[len++] = X[i];
		}
	}

	print(Y, len);
}

void print(int Y[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d  ", Y[i]);
	}
	printf("\n");
}