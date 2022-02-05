/*https://www.acmicpc.net/problem/8958
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	int n;
	char test[80];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int cnt = 1, sum = 0;
		scanf("%s", test);
		
		for (int j = 0; j < strlen(test) ; j++)
		{
			if (test[j] == 'O')
			{
				sum += cnt;
				cnt++;
			}
			else
			{
				cnt = 1;
			}
		}
		cnt=1;
		printf("%d\n", sum);
	}	
	
	
	return 0;
}
