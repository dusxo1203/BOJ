/*
 https://www.acmicpc.net/problem/2562
9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, ���� �ٸ� 9���� �ڿ���

3, 29, 38, 12, 57, 74, 40, 85, 61

�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.*/

#include <stdio.h>
#include <limits.h>
#pragma warning (disable:4996)

int main()
{
	int arr[9],num,max=INT_MIN;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
			num = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d", num);
	return 0;
}