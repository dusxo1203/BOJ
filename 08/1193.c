/*
https://www.acmicpc.net/problem/1193

제목:
분수찾기

문제:
무한히 큰 배열에 다음과 같이 분수들이 적혀있다.

1/1	1/2	1/3	1/4	1/5	…
2/1	2/2	2/3	2/4	…	…
3/1	3/2	3/3	…	…	…
4/1	4/2	…	…	…	…
5/1	…	…	…	…	…
…	…	…	…	…	…
이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

관련 블로그: 
https://dusxo1203.tistory.com/61

*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int input, front=2, back=3,inc=2, front_val, back_val,val_change,sum=2;

	scanf("%d", &input);
	if (input == 1)
	{
		printf("1/1");
		return 0;
	}
	while (1)
	{
		sum++;
		if (front<=input && back>=input)
		{
			front_val = input - front + 1;
			back_val = sum - front_val;
			if (sum % 2 == 0)
			{
				val_change = front_val;
				front_val = back_val;
				back_val = val_change;
			}
			break;
		}
		front += inc;
		back += inc+1;
		inc++;
		
	}
	printf("%d/%d", front_val, back_val);
	return 0;
}