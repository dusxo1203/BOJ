/*https://www.acmicpc.net/problem/8393
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
*/
/*
https://www.acmicpc.net/problem/8393

제목:
합

문제:
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/22
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a,i,sum=0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}