/*
https://www.acmicpc.net/problem/10430

����:
������

����:
(A+B)%C�� ((A%C) + (B%C))%C �� ������?

(A��B)%C�� ((A%C) �� (B%C))%C �� ������?

�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/13
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A*B) % C);
	printf("%d\n", ((A % C) *(B % C)) % C);

	return 0;
}