/*
https://www.acmicpc.net/problem/1330

제목:
두 수 비교하기

문제:
두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/15
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