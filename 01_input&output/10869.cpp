/*
https://www.acmicpc.net/problem/10869

����:
��Ģ����

����:
�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

���� ��α�: https://dusxo1203.tistory.com/12
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}