/*
https://www.acmicpc.net/problem/10869

제목:
사칙연산

문제:
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 

관련 블로그: https://dusxo1203.tistory.com/12
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}