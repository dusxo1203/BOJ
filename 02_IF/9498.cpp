/*
https://www.acmicpc.net/problem/9498

제목:
시험 성적

문제:
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

관련 블로그: https://dusxo1203.tistory.com/16
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int score;

	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A");
	}
	else
	{
		if (score >= 80)
		{
			printf("B");
		}
		else
		{
			if (score >= 70)
			{
				printf("C");
			}
			else
			{
				if (score >= 60)
				{
					printf("D");
				}
				else
				{
					printf("F");
				}
			}
		}
	}
	return 0;
}