/*
https://www.acmicpc.net/problem/1546

����:
���

����:
�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. �ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.

���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.

�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��α�: https://dusxo1203.tistory.com/39
*/
#include <stdio.h>
#include <limits.h>
#pragma warning (disable:4996)

int main()
{
	int n;
	double avr = 0, max = INT_MIN, score;
	double arr[1000] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &score);
		arr[i] = score;

		if (score > max)
		{
			max = score;
		}
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] / max * 100;
		avr += arr[i];
	}
	avr = avr / n;
	printf("%lf\n", avr);
	return 0;
}