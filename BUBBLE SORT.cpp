#include<stdio.h>
//#include<conio.h>

int bubble_sort(int arr[],int n)
{
	int i,j,t;
	for(i=n-2;i>=0;i--)
		for(j=0;j<=i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			
			}
		}
}

int main()
{
	int a[25];
	int n,i;
	printf("\n\t PI. enter the number of elements>>");
	scanf("%d",&n);
	printf("\n\t PI. enter the element in array>>");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n\t-- original array --");
	for(i=0;i<n;i++)
	printf("\n\t%d",a[i]);
	bubble_sort(a,n);
	printf("\n\t -- sorted array --");
	for(i=0;i<n;i++)
	printf("\n\t%d",a[i]);
//	getch();
}


