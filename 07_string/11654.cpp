/*
https://www.acmicpc.net/problem/11654

제목:
아스키코드

문제:
알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/45
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	char input;

	scanf("%c", &input); //c와 s의 차이점 구분

	printf("%d", input);
	return 0;
}