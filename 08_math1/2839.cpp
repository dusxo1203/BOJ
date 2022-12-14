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
    int quo5,rem5,quo3,cnt;
    printf("킬로그램 입력(int):");
    scanf("%d",&N);

    quo5 = N/5;
    rem5 = N%5;
    if(quo5 ==0 && rem5==0)
    {
        cnt =0;
        return 0;
    }

    for(int i =quo5;i>0;i--)
    {
        if((N-quo5*5)%3==0)
        {
            quo3 = (N-quo5*5)/3;
            cnt = i+quo3;
            break;
        }
        else
        {
            continue;
        }
        if(i=1)
        {
            cnt=-1;
        }
    }
    printf("%d",cnt);

    return 0;
}