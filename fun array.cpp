#include<stdio.h>
main()
{
	int array(int a[],int n);
	int n,z;
	int a[100];
	printf("pls enter how many number you want to enter\n");
	scanf("%d",&n);
	z=array(a,n);
	printf("%d",z);
	
}
int array(int a[],int n)
{
	printf("pls enter your number's\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("your array is\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
