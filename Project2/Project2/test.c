#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a, b;
	srand(time(NULL));
	b = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &a);
		if (a < b)
		{
			printf("С��\n");
		}
		else if (a > b)
		{
			printf("����\n");
		}
		else if (a == b)
		{
			printf("�¶���\n");
			break;
		}
	}

	return 0;
}
