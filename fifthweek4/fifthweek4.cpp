#include<stdio.h>
#include<conio.h>
int main()
{
	int num[7], x;
	int i, j;
	printf("number #1 : ");
	scanf_s("%d", &num[0]);
	printf("number #2 : ");
	scanf_s("%d", &num[1]);
	printf("number #3 : ");
	scanf_s("%d", &num[2]);
	printf("number #4 : ");
	scanf_s("%d", &num[3]);
	printf("number #5 : ");
	scanf_s("%d", &num[4]);
	printf("number #6 : ");
	scanf_s("%d", &num[5]);
	printf("number #7 : ");
	scanf_s("%d", &num[6]);
	
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (num[j] > num[j + 1])
			{
				x = num[j];
				num[j] = num[j + 1];
				num[j + 1] = x;
			}
		}
	}
	printf("First maximum number : %d\n", num[6]);
	printf("Second maximum number : %d\n", num[5]);
	printf("First minimum number : %d\n", num[0]);
	printf("Second minimum number : %d\n", num[1]);


	return 0;
}
