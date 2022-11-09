/*
https://www.acmicpc.net/problem/2577

����:
������ ����

����:
�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��� A = 150, B = 266, C = 427 �̶�� A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, ����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.

���� ��α�: https://dusxo1203.tistory.com/36
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b, c,mul,val;
	int arr[10]={ 0, };//10���� �迭���� 0���� �ʱ�ȭ
	scanf("%d %d %d", &a, &b, &c);
	mul = a * b * c;
	while (mul>0)
	{
		val = mul % 10;
		arr[val]++;
		mul = mul / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}