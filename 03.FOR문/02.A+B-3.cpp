/*https://www.acmicpc.net/problem/10950
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num,a,b,i;
	scanf("%d", &num);
	for (i = num; i > 0; i--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	
	return 0;
}