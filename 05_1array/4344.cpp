/*https://www.acmicpc.net/problem/4344
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
*/
/*
https://www.acmicpc.net/problem/4344

����:
����� �Ѱ���

����:
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

���� ��α�: https://dusxo1203.tistory.com/41
*/
//#include <stdio.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int n, sum = 0,cnt=0, avrcnt = 0 , arr[1001];
//	float per,test,avr;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &test);
//		arr[i] = test;
//		if (i == 0)
//		{
//			continue;
//		}
//		for (int j = 0; j < arr[0]; j++)
//		{
//			sum += arr[i];
//			cnt++;
//
//		}
//		avr =(float) sum / cnt;
//		
//
//		for (int k = 1; k < n; k++)
//		{
//			if (arr[k] < avr)
//			{
//				avrcnt++;
//			}
//
//		}
//		per = (float)avrcnt / cnt;
//		printf("%f\n", per);
//	}
//	return 0;
//}

#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int C = 0, N = 0;
	scanf("%d", &C);

	for (int i = 0; i < C; i++) 
	{
		scanf("%d", &N);
		int score[1000], sum = 0;
		double avg = 0.00;
		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / N;
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (avg < score[j])
				count++;
		}
		printf("%.3f%%\n", (double)count * 100 / N);
	}
	return 0;
}