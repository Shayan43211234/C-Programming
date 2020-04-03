#include<stdio.h>
main()
{
	int a[100][100];
	int x,y,key;
	printf("\npls enter how many row you want create\n");
	scanf("%d",&x);
	printf("\npls enter how many coloum you want to create\n");
	scanf("%d",&y);
	printf("\npls enter your data\n");
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nyour matrix will be\n");
	for(int i=1;i<=x;i++)
	{
		printf("\n");
		for(int j=1;j<=y;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\npls enter which number you want to search\n");
	scanf("%d",&key);
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			if(a[i][j]==key)
			{
				printf("%d will be found at %dth position of the row & %dth postition of the coloum\n",key,i,j);
			}
		}
	}
	
}
