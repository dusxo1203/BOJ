/*�� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf(">");
	}
	else
	{
		if (a < b)
		{
			printf("<");
		}
		else
		{
			printf("==");
		}
	}
	return 0;
}