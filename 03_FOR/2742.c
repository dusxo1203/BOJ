/*https://www.acmicpc.net/problem/2742
�ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

/*
https://www.acmicpc.net/problem/2742

����:
���� N

����:
�ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/25
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