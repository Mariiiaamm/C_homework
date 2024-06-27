#include <stdio.h>

void func_409(int X[], int N);

int main()
{
   int X[] ={ -3, 2, -3, 0, 0, -3, 4, 5, 0, 0, 2 , 11};
	int N = sizeof(X) / sizeof(int);
	
	func_409( X,  N);

   return 0;
}


int deleteElem(int X[], int size, int elem) {
	for (int i = 0; i < size; ) 
	{
		if (X[i] == elem) {
			for (int j = i; j < size - 1; j++) {
				X[j] = X[j + 1];
			}
			size--;
		}
		else
			i++;
	}
	return size;
}

void func_409(int X[], int N) {
	//  2,  4, 5, 2, 11 

	int size = N;
	for (int i = 0; i < size; i++)
	{
		int j, dupl = 1;
		for (j = 0; j < size; j++)
		{
			if (i != j && X[i] == X[j]) {
				dupl++;
				if (dupl >2) {
					size = deleteElem(X, size, X[i]);
					break;
				}
			}
		}
	}
	
	// print
	for (int i = 0; i < size; i++) {
		printf("%d  ", X[i]);
	}
}