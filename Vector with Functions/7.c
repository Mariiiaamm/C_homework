#include <stdio.h>
#include <stdbool.h>

bool noOddDigits(int n) {
	while (n != 0) {
		int digit = n % 10;  // 0 - even number
		if(digit % 2 != 0)  // odd number
		   return false;
		n = n / 10;
	}

	return true;  // only even digits
}

int main()
{
   int N = 240; // >0
   int arr[N];
   int len = 0;
   
	for (int i = 1; i < N; i++) {
		if (noOddDigits(i)) { // if noOddDigits() returns true
			arr[len++] = i;
		}
	}
	
   for( int i=0; i<len; i++){
      printf("%d ", arr[i]);
   }

    return 0;
}
