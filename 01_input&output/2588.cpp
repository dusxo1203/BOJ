/*
https://www.acmicpc.net/problem/2588

����:
����

����:
(�� �ڸ� ��) �� (�� �ڸ� ��)�� ������ ���� ������ ���Ͽ� �̷������.
(1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� �� (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/14
*/
#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b,fir,sec,thr,c,d,e;
	
	scanf("%d %d", &a, &b);

	fir = b / 100;
	sec = (b / 10) % 10;
	thr = b % 10;
	//printf("%d %d %d \n",fir,sec,thr );
	printf("%d\n", e = a * thr);
	printf("%d\n",d= a * sec);
	printf("%d\n", c = a * fir);
	printf("%d\n", e + d * 10 + c * 100);

	return 0;
}