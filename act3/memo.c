#include <stdio.h>

int binsearch(int, int v[], int n);

int main()
{
  int v[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  printf("%d\n", binsearch(2, v, 9));
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;

  while(low <= high){
	mid = (low + high) / 2;
	if(x < v[mid])
	  high = mid - 1;
	else if(x > v[mid])
	  low = mid - 1;
	else
	  return mid;
  }
  return -1;
}
