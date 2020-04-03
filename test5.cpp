#include<stdio.h>
main()
{
	int n,a[100];
	printf("pls enter your number");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		a[i]=a[i]+0;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
