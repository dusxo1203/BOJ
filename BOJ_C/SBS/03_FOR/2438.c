/*https://www.acmicpc.net/problem/2438
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
*/
/*
https://www.acmicpc.net/problem/2438

����:
�� ��� - 1

����:
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

���� ���α�: https://dusxo1203.tistory.com/28
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num, i,j;

	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}