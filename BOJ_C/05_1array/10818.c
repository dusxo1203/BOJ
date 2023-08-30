/*
https://www.acmicpc.net/problem/10818

제목:
최대최소

문제:
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/34
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n,input,min=1000000,max=-1000000;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		if (input < min)
		{
			min = input;
		}
		if (input > max)
		{
			max = input;
		}
	}
	printf("%d %d\n", min, max);


	return 0;
}