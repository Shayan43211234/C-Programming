#include<stdio.h>
main()
{
	char a[10][10];
	int x,y;
	printf("ROW\n");
	scanf("%d",&x);
	printf("COLOUM\n");
	scanf("%d",&y);
	printf("ENTER VALUE\n");
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%[^\n]s",a[i][j]);
		}
	}
	printf("MATRIX IS\n");
	for(int i=0;i<x;i++)
	{
		printf("\n");
		for(int j=0;j<y;j++)
		{
			printf("\t%c",a[i][j]);
		}
	}
}
