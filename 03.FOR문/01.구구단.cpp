/*https://www.acmicpc.net/problem/2739
N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num,i;

	scanf("%d", &num);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
	return 0;
}