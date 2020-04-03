#include<stdio.h>
int maximum(int a,int b,int c);
main()
{
	int a,b,c;
	printf("pls enter your three number's\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("the maximum of the three number is\n%d",maximum(a,b,c));
}
int maximum(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return (a);
	}
	if(b>a && b>c)
	{
		return (b);
	}
	if(c>a && c>b)
	{
		return (c);
	}
}
