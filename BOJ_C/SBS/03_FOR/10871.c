/*
https://www.acmicpc.net/problem/10871

����:
X���� ���� ��

����:
���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/30
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int x, n,input;
	scanf("%d %d", &x, &n);

	for (int i = 0; i < x; i++)
	{
		scanf("%d", &input);
		if (input < n)
		{
			printf("%d ", input);
		}
		else {
			;
		}
	}
	return 0;
}