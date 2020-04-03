#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10];
	int n,m,o,p;
	printf("\nplease enter your 1st matrix row no=\n");
	scanf("%d",&n);
	printf("\nplease enter your 1st matrix coloum no=\n");
	scanf("%d",&m);
	printf("\nplease enter your values=\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nyour entered matrix will be=\n");
	for(int i=0;i<n;i++)
	{
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
	printf("\nplease enter your 2nd matrix row no=\n");
	scanf("%d",&o);
	printf("\nplease enter your 2nd matrix coloum no=\n");
	scanf("%d",&p);
	printf("\nplease enter your values=\n");
	for(int i=0;i<o;i++)
	{
		for(int j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nyour entered matrix will be=\n");
	for(int i=0;i<o;i++)
	{
		printf("\n");
		for(int j=0;j<p;j++)
		{
			printf("\t%d",b[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nthe addition of matrix 1 & 2 is=\n");
	for(int i=0;i<n;i++)
	{
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("\t%d",c[i][j]);
		}
	}
}
