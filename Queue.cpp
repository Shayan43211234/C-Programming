#include<stdio.h>
int rear=-1,front=-1;
main()
{
	int n,item;
	char option;
	printf("pls enter how many length of array you want to create\n");
	scanf("%d",&n);
	printf("\n");
	int arr[n];
	printf("A. EnQueue Data\n");
	printf("B. DeQueue Data\n");
	printf("C. Rear Element of The Queue\n");
	printf("D. Front Element of The Queue\n");
	printf("E. IsEmpty!\n");
	printf("F. IsFull!\n");
	printf("G. Exit\n\n");
	do
	{
		printf("\n\nEnter an Option\n");
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
		if(option == 'g')
		{
			int a=71;
			option=(char)a;
		}
		
		switch(option)
		{
			
			case 'A':
				if(arr[n-1]==rear)
				{
					printf("you must have to be de-queue some element from the queue! because you have reached the maximum limit of the queue:(\n");
				}
				else 
				{
					if(front==-1 && rear==-1)
					{
						front=rear=0;				
						printf("pls enter which number you want to be en-queue\n");
						scanf("%d",&item);
						int EnQueue(int arr[], int item);
						int x=EnQueue(arr,item);
						printf("%d is successfully En-Queueed",x);
					}
					else
					{
						printf("pls enter which number you want to be en-queue\n");
						scanf("%d",&item);
						int EnQueue(int arr[], int item);
						int x=EnQueue(arr,item);
						printf("%d is successfully En-Queueed",x);					
					}
				}
				break;
			case 'B':
				if(front==-1 && rear==-1)
				{
					printf("your queue is empty! you must have to be En-Queue some element first");
				}
				else
				{
					if(arr[front]==arr[rear])
					{
						front=rear=-1;
						printf("your queue is empty! you must have to be En-Queue some element first");
					}
					else
					{
						void DeQueue(int arr[]);
						DeQueue(arr);						
					}
				}
				break;
			case 'C':
				break;
			case 'D':
				break;
			case 'E':
				break;
			case 'F':
				break;
			case 'G':
				break;	
			default:
				break;
				
		}
		if(option!='G')
		{
			printf("\n\nA. EnQueue Data\n");
			printf("B. DeQueue Data\n");
			printf("C. Rear Element of The Queue\n");
			printf("D. Front Element of The Queue\n");
			printf("E. IsEmpty!\n");
			printf("F. IsFull!\n");
			printf("G. Exit\n\n");
		}
		
		
	}while(option != 'G');
}
int EnQueue(int arr[], int item)
{
	rear++; 
	arr[rear]=item;
	return arr[rear];
}
void DeQueue(int arr[])
{
	printf("%d is successfully De-Queueed",arr[front]);
	front++;
}
