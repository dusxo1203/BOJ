/*https://www.acmicpc.net/problem/8393
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
/*
https://www.acmicpc.net/problem/8393

����:
��

����:
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/22
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