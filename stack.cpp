#include<stdio.h>
int top=-1;
main()
{
	int n,item;
	char option;
	printf("pls enter how many length of array you want to create\n");
	scanf("%d",&n);
	printf("\n");
	int arr[n];
	printf("A. Push Data\n");
	printf("B. Pop Data\n");
	printf("C. Top Element of The Stack\n");
	printf("D. IsEmpty!\n");
	printf("E. IsFull!\n");
	printf("F. Exit\n\n");
	do
	{
		printf("Enter an Option\n");
		scanf("%s",&option);
		if(option == 'a')
		{
			int a=65;
			option=(char)a;	
		}
		if(option == 'b')
		{
			int a=66;
			option=(char)a;
		}
		if(option == 'c')
		{
			int a=67;
			option=(char)a;
		}
		if(option == 'd')
		{
			int a=68;
			option=(char)a;
		}
		if(option == 'e')
		{
			int a=69;
			option=(char)a;
		}
		if(option == 'f')
		{
			int a=70;
			option=(char)a;
		}
		
		switch(option)
		{
			case 'A':
				if(arr[n-1]==top)
				{
					printf("you must have to be pop-up some element from the stack! because you have reached the maximum limit of the stack:(\n");
				}
				else
				{
					printf("pls enter which number you want to be push\n");
					scanf("%d",&item);
					void push(int arr[],int item);
					push(arr,item);
				}
				break;
			case 'B':
				if(top==-1)
				{
					printf("you must have to be push some element to the stack! because you have not any element into it:(\n");
				}
				else
				{
					void pop(int arr[]);
					pop(arr);			
				}
				break;
			case 'C':
				if(top==-1)
				{
					printf("no data found on your stack! Stack is empty\n");
				}
				else
				{
					void Top(int arr[]);
					Top(arr);					
				}
				break;
			case 'D':
				if(top==-1)
				{
					printf("Stack is empty\n");
				}
				else
				{
					printf("Stack is not empty\n");
				}
				break;
			case 'E':
				if(arr[n-1]==top)
				{
					printf("Stack is full\n");
				}
				else
				{
					printf("Stack is not full\n");
				}
				break;
			case 'F':
				break;
			default:
				printf("Error Found 404! :( pls choose a valid option :)\n");
				break;
		}
	if(option!='F')
	{
	printf("\nA. Push Data\n");
	printf("B. Pop Data\n");
	printf("C. Top Element of The Stack\n");
	printf("D. IsEmpty!\n");
	printf("E. IsFull!\n");
	printf("F. Exit\n\n");
	}
		
	}while(option!='F');
}
void push(int arr[],int item)
{
	top++;
	arr[top]=item;
	printf("item %d is pushed successfully\n",item);
}
void pop(int arr[])
{
	printf("%d is poped successfully\n",arr[top]);
	top--;
}
void Top(int arr[])
{
	printf("%d is the top most element in the stack\n",arr[top]);
}
