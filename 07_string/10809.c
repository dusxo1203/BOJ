/*
 https://www.acmicpc.net/problem/10809

 ����:
 ���ĺ� ã��

 ����:
 ���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. 
 ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, 
 ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 
 ���� ��α�: https://dusxo1203.tistory.com/47
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	char word[100] = { 0 };
	scanf("%s", word);
	for (int i = 97; i <= 122; i++) 
	{
		int j = 0;

		while (word[j] != 0) 
		{
			if (word[j] == i)
			{
				break;
			}	
			j++;
		}

		if (word[j] == i) 
			printf("%d ", j);
		else 
			printf("-1 ");
	}
}
