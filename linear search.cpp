#include<stdio.h>
main()
{
	int a[100];
	int i,n,z;
	printf("please enter how many number you want to search=");
	scanf("%d",&n);
	printf("\nplease enter your number=");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nplease enter your searched number=");
	scanf("%d",&z);
	for(int i=1;i<=n;i++)
	{
		if(z==a[i])
		{
			break;
			//printf("\nyour number is found");
			//printf("\nthe founded position is=%d",i);
			//exit;
		}
	}
	if(z==a[i])
		printf("%d is found at the postion of %d",z,i);
	else
		printf("%d is't found",z);
}
