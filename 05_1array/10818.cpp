/*
https://www.acmicpc.net/problem/10818

����:
�ִ��ּ�

����:
N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/34
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n,input,min=1000000,max=-1000000;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		if (input < min)
		{
			min = input;
		}
		if (input > max)
		{
			max = input;
		}
	}
	printf("%d %d\n", min, max);


	return 0;
}