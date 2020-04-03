#include<stdio.h>
main()
{
	int a[10],i,max;
	printf("please enter the number");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
	}	
	printf("the maximum value is %d",a[i]);
		
}
