/*
https://www.acmicpc.net/problem/10952
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b;

	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
		{
			break;
		}
		printf("%d\n", a + b);
	}

	return 0;
}