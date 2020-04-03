#include<stdio.h>
main()
{
	int l,r,mid,key;
	int a[100];
	printf("pls enter your lower degree of the array\n");
	scanf("%d",&l);
	printf("pls enter your higher degree of the array\n");
	scanf("%d",&r);
	printf("pls enter your values");
	mid=(l+r)/2;
	for(int i=l;i<=r;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nyour array is\n");
	for(int i=l;i<=r;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\npls enter your key what you want to search\n");
	scanf("%d",&key);
	for(int i=l;i<=r;i++)
	{
		if(a[mid]<=key)
		{
			l=mid;
			printf("the %d was founded at %dth position\n",key,i);	
		}
		if(a[mid]>=key)
		{
			r=mid;
			printf("the %d was founded at %dth position\n",key,i);
		}
	}
}
