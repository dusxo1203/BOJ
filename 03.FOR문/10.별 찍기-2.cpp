/*https://www.acmicpc.net/problem/2439
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num, i, j,k;

	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (k = 1; k <= num - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}