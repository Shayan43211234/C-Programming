#include<stdio.h>
main()
{
	int addition2(int c,int d);
	int addition1(int a,int b);
	int multiplication(int e,int a,int b,int c,int d);
	int a,b,c,d,e;
	printf("pls enter your values\n");
	scanf("%d%d",&a,&b);
	printf("pls enter your values\n");
	scanf("%d%d",&c,&d);
	e=multiplication(e,a,b,c,d);
	printf("your result is %d",e);
}
int addition1(int a,int b)
{
	return(a+b);
}
int addition2(int c,int d)
{
	return(c+d);
}
int multiplication(int e,int a,int b,int c,int d)
{
	e=addition1(a,b)*addition2(c,d);
	return(e);
}
