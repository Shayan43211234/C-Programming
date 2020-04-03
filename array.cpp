#include<stdio.h>
main()
{
	int n;
	int a[100];
	printf("please enter how many number you want to enter=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
}
