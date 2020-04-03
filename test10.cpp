#include<stdio.h>
int main()
{
	int a();
	int b(int a);
	//int c=a();
	//int d=b(1);
	printf("values are %d & %d",a(),b(20));
}

int a()
{
	int x=5,y=5,z;
	z=x+y;
	return z;
}
int b(int a)
{
	int b=5;
	int q=a/b;
	return q;	
}


