#include<stdio.h>
#include<conio.h>
int main()
{
	int num[7], x;
	int i, j;
	printf("Enter seven inteeger numbers : \n");
	for (i = 0; i < 7; i++)
	{
		scanf_s("%d ", & num[i]);
	}
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