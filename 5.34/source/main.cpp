//迴圈計算指數
#include <stdio.h>
#include <stdlib.h>
int integerPower(int, int);	//宣告副程式
int main()
{
	int b, e, ans;	//b=base e=exponent
	printf("Enter base:");	scanf_s("%d",&b);
	printf("Enter exponent:");	scanf_s("%d",&e);
	ans = integerPower(b, e);
	printf("The answer:%d\n",ans);
	system("pause");
	return 0;
}
int integerPower(int x, int y)	//指數副程式
{
	if (y == 1) { return x; }
	else { return x *= integerPower(x, y - 1); }
}
