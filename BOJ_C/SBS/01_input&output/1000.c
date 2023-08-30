/*
https://www.acmicpc.net/problem/1000
제목:
A+B

문제:
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/8
*/

#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a + b);

	return 0;
}