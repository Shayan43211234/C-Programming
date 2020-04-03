#include<stdio.h>
main()
{
	int n;
	int i=0;
	int sum=0;
	printf("enter number\n");
	scanf("%d",&n);
	while(i<n)
	{
		sum=sum+i+1;
		i++;
	}
	printf("%d",sum);
}
