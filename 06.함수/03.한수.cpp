/*
https://www.acmicpc.net/problem/1065
� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�. 
���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�. N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <stdio.h>
#pragma warning (disable:4996)

void han_su(int i);
int cnt = 0;
int main()
{
	int input, seq=0, arr[1000]={0,};

	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		han_su(i);
		
	}
	printf("%d\n", cnt);

	return 0;
}
void han_su(int i)
{
	int fir=0,sec=0,thr=0;

	if (i < 100)
	{
		cnt++;
	}
	else
	{
		thr = i % 10;
		sec = (i / 10) % 10;
		fir = i / 100;
		if ((fir - sec) == (sec - thr) && (sec - fir) == (thr - sec))
		{
			cnt++;
		}
	}
}