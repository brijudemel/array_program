#include<stdio.h>
int main()
{
	int i=0,j=0,sum=0;
	int a[3][3];
	int *p[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			p[i][j]=&a[i][j];
		}
	}
	printf("Enter the elements of the array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",p[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*p[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+ *p[i][j];
			}
			else if((i+j)==2)
			{
				sum=sum+ *p[i][j];
			}
		}
	}
	printf("Sum: %d",sum);
	return 0;
}
