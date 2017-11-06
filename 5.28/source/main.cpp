//大小寫轉換
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char StrConversion(char);  //宣告副程式
char Str[1000];			   
int a;
int main()
{
	scanf("%s",Str);
	for (a = 0; a <= (strlen(Str) - 1); a++)
	{
		Str[a] = StrConversion(Str[a]);
		printf("%c",Str[a]);
	}
	puts("");
	system("pause");
	return 0;
}
char StrConversion(char x)	//大小寫轉換副程式
{
	if (x>= 'a')
		return x-('a'-'A');
	else
		return x-('A'-'a');
}