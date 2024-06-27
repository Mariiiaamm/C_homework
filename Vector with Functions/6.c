#include <stdio.h>

int sumDigits(int n) {
   int sum = 0;
   int digit;
	while (n != 0) {
	   digit = n % 10;
		sum += digit;
		n = n / 10;
	}

	return sum;
}

int main()
{
   int N = 44;
   int arr[N];    // array for result , N = max size of arr
   int len = 0;   // len - real size of arr
   
   for (int i = 1; i < N; i++) {
      int sum = sumDigits(i);
      if (sum % 2 != 0) {  // odd
	arr[len++] = i;
      }
   }
	
   for( int i=0; i<len; i++){
      printf("%d ", arr[i]);
   }

    return 0;
}