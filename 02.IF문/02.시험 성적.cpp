/*���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int score;

	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A");
	}
	else
	{
		if (score >= 80)
		{
			printf("B");
		}
		else
		{
			if (score >= 70)
			{
				printf("C");
			}
			else
			{
				if (score >= 60)
				{
					printf("D");
				}
				else
				{
					printf("F");
				}
			}
		}
	}
	return 0;
}