#include<stdio.h>
main()
{
	int a[100][100];
	int n,m,key;
	printf("please enter how many row you want to enter=");
	scanf("%d",&n);
	printf("\nplease enter how many coloum you want to enter=");
	scanf("%d",&m);
	printf("\nplease enter your value");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n your entered matrix was");
	for(int i=0;i<n;i++)
	{
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
	printf("\nplease enter which number you want search");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==key)
			{
				printf("\n your %d element is found at %d position of the row and %d position of the coloum",key,i,j);
			}
		}
	}
}
