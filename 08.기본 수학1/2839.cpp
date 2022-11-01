/*
https://www.acmicpc.net/problem/2839

제목:
설탕 배달

관련 블로그: 
https://dusxo1203.tistory.com/

*/
#include <stdio.h>

int main()
{
    int N;
    int quo5,remain5,cnt=0;
    scanf("%d",&N);
    quo5 = N/5;
    remain5 = N%5;
    for(int i =quo5;i>0;i--)
    {
        if((N-quo5*5)%3==0)
        {
            cnt = (N-quo5*5)/3;
        }
    }

    return 0;
}