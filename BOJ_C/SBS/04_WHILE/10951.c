/*https://www.acmicpc.net/problem/10951
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
/*
https://www.acmicpc.net/problem/10951

����:
A+B-4

����:
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/32
*/


#include <stdio.h>
#pragma warning(disable:4996)


int main() 
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) 
	{
		printf("%d\n", a + b);
	}
	return 0;
}