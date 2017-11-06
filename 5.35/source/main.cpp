#include <stdio.h>
#include <stdlib.h>
unsigned long long int Fibonacci(unsigned int);
unsigned long long int  arr[1000];
unsigned int n,i;
int main()
{
	printf("Enter n of Fibonacci(n):");		scanf_s("%d",&n);
	printf("Fibonacci(%d)=%llu",n,Fibonacci(n));
	system("pause");
	return 0;
}
unsigned long long int Fibonacci(unsigned int n)
{
	arr[0] = 0;
	arr[1] = 1;
	if (n == 1) { return 0; }
	if (n == 2 || n == 3) {return 1;}
	else
	{
		for (i = 2; i <= n; i++)
		{

			arr[i] = arr[i - 2] + arr[i - 1];
			if (arr[i] < arr[i - 1])
			{
				return arr[i - 1];
			}
		}
		return arr[i-2];
	}
}