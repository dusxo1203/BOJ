/*
https://www.acmicpc.net/problem/11021

����:
A+B - 7

����:
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/26
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
		printf("Case #%d: %d\n", i + 1, a + b);
	}

	return 0;
}
