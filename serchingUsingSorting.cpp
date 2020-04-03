#include<stdio.h>
main()
{
	int n;
	printf("pls enter how many number you want to enter for Sorting and Searching purpose:");
	scanf("%d",&n);
	
	int arr[n];
	printf("\npls enter your all %d number's'\n\n",n);
	for(int i=0;i<n;i++)
	{
		printf("pls enter your %d no=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nyour entered number was:\n");
	void print(int n,int arr[]);
	print(n,arr);
	
	int key;
	printf("\npls enter which number you want to search:");
	scanf("%d",&key);
	void search(int arr[],int key,int n);
	search(arr,key,n);
	
	printf("\nafter sorting your number will be:");
	printf("\n");
	void sort(int arr[],int n);
	sort(arr,n);
	
	printf("\nafter sorting your searched key found at:");
	void search(int arr[],int key,int n);
	search(arr,key,n);
}

void search(int arr[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			break;
		}
	}
	if(key==arr[i])
	{
		printf("\n%d is found at %d postion at the array\n",key,i);
	}
	else
	{
		printf("\n%d is not found\n",key);
	}
}

void sort(int arr[],int n)
{
	int i,j,tmp;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		printf("%d=%d",j,arr[j]);
		printf("\n");
	}
}

void print(int n,int arr[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d=%d",i,arr[i]);
		printf("\n");
	}
}



