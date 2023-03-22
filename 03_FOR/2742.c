/*https://www.acmicpc.net/problem/2742
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/

/*
https://www.acmicpc.net/problem/2742

제목:
기찍 N

문제:
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/25
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, i;
	scanf("%d", &a);

	for(i = a; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}