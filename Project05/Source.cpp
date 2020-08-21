#include<stdio.h>
int main()
{
	int num[10], i, j, temp;
	for (i = 0; i < 10; i++)
	{
		printf("enter number #%d : ", i);
		scanf_s("%d", &num[i]);
	}
	for(i=9;i>0;i--)
		for(j=0;j<i;j++)
			if(num[j]>num[j+1])
			{
				temp = num[j]; num[j] = num[j + 1]; num[j + 1] = temp;
			}
	printf("sorting result : ");
	for (i = 0; i < 10; i++) printf("%d", num[i]);
	printf("\n");
	return 0;
}