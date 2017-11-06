#include<stdio.h>
#include <stdlib.h>

void Hanoi(int n, char start, char reg, char goal);
int main() 
{
	Hanoi(64, '1', '2', '3');
	system("pause");
	return 0;
}
void Hanoi(int num, char start, char reg, char goal)
{
	if (num > 0)
	{
		Hanoi(num - 1, start, goal, reg);

		printf("%d  %c -> %c  \n", num, start, goal);

		Hanoi(num - 1, reg, start, goal);
	}
}


