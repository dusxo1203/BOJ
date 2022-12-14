/*https://www.acmicpc.net/problem/2439
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
*/
/*
https://www.acmicpc.net/problem/2439

제목:
별 찍기 - 2

문제:
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

관련 블로그: https://dusxo1203.tistory.com/29
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num, i, j,k;

	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (k = 1; k <= num - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}