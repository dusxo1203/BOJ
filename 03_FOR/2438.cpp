/*https://www.acmicpc.net/problem/2438
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
*/
/*
https://www.acmicpc.net/problem/2438

제목:
별 찍기 - 1

문제:
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

관련 블로그: https://dusxo1203.tistory.com/28
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num, i,j;

	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}