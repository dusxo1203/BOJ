/*https://www.acmicpc.net/problem/11022
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
/*
https://www.acmicpc.net/problem/11022

����:
A+B - 8

����:
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/27
*/
#include <stdio.h>
#pragma warning (disable:4996)


int main() {

	int n;
	int a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1,a,b, a + b);
	}

	return 0;
}
