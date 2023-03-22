/*https://www.acmicpc.net/problem/10951
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
*/
/*
https://www.acmicpc.net/problem/10951

제목:
A+B-4

문제:
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/32
*/


#include <stdio.h>
#pragma warning(disable:4996)


int main() 
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) 
	{
		printf("%d\n", a + b);
	}
	return 0;
}