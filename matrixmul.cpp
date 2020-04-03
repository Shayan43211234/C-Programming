#include<stdio.h>
main()
{
	int a[100][100],b[100][100],c[100][100];
	int x,y,p,q;
	printf("\npls enter how many row you want for 1st matrix\n");
	scanf("%d",&x);
	printf("\npls enter how many coloum you want for 1st matrix\n");
	scanf("%d",&y);
	printf("\npls enter your data of 1st matrix\n");
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nyour 1st matrix will be\n");
	for(int i=0;i<x;i++)
	{
		printf("\n");
		for(int j=0;j<y;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\npls enter how many row you want for 2nd matrix\n");
	scanf("%d",&p);
	printf("\npls enter how many coloum you want for 1st matrix\n");
	scanf("%d",&q);
	printf("\npls enter your data of 2nd matrix\n");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nyour 2nd matrix will be\n");
	for(int i=0;i<p;i++)
	{
		printf("\n");
		for(int j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}
	printf("\nthe multiplication of the 1st & 2nd matrix will be\n");
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	for(int i=0;i<x;i++)
	{
		printf("\n");
		for(int j=0;j<y;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
}
