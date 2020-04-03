#include<stdio.h>
main()
{
	int a[100][100];
	int x,y;
	printf("please enter how many row you want");
	scanf("%d",&x);
	printf("\nplease enter how many coloum upo want");
	scanf("%d",&y);
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);		
		}
	}
	printf("\nthe matrix will be");
	for(int i=0;i<x;i++)
	{
		printf("\n");
		for(int j=0;j<y;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
}
