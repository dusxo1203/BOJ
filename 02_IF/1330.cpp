/*
https://www.acmicpc.net/problem/1330

����:
�� �� ���ϱ�

����:
�� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/15
*/
#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf(">");
	}
	else
	{
		if (a < b)
		{
			printf("<");
		}
		else
		{
			printf("==");
		}
	}
	return 0;
}