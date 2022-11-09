/*
https://www.acmicpc.net/problem/2869

제목:
달팽이는 올라가고 싶다.

문제:
땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.

달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.

달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.

관련 블로그: 
https://dusxo1203.tistory.com/62

*/
//#include <stdio.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int V, A, B,cnt=0,day=0;
//
//	scanf("%d %d %d", &A, &B, &V);
//
//	while (1)
//	{
//		day++;
//		cnt += A;
//		if (cnt >= V)
//		{
//			break;
//		}
//		cnt -= B;
//	}
//	printf("%d", day);
//	return 0;
//}
//( 나무의 길이(v) - 낮에 올라가는 거리(a) ) 에서 하루에 올라가는 거리(a - b)를 나누고

//나누어 떨어지면 그 몫을 날 수(n)에 더하고, 떨어지지 않으면 여기에 + 1을 하여 더한다.
//#include <stdio.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int V, A, B, cnt = 0, day = 0;
//
//	scanf("%d %d %d", &A, &B, &V);
//
//	day = (V - B - 1) / (A - B) + 1;
//
//	printf("%d", day);
//	return 0;
//
//}

#include <stdio.h>
#pragma warning(disable:4996)

void binarySearch(int a, int b);
int A, B, V;
int y1, y2, mid = 0, result = 0;

int main()
{
	
	scanf("%d %d %d", &A, &B, &V);
	int left, right;
	left = 1;
	right = (V / (A - B)) + 1;
	binarySearch(left, right);
	printf("%d", result);

	return 0;
}

void binarySearch(int left,int right)
{
	if (left <= right) {
		mid = (left + right) / 2;
		y2 = mid * (A - B);
		y1 = y2 + B;
		if (y1 < V) {
			binarySearch(mid + 1, right);
		}
		else {
			result = mid; // 제가 앞서 말한 정답이 될 가능성이 있는 mid 값만 result에 넣습니다.
			binarySearch(left, mid - 1);
		}
	}
}