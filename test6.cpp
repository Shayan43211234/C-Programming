#include<stdio.h>
main()
{
	char option;
	scanf("%c",&option);
	if(option == 'a')
	{
		int a=65;
		option=(char)a;
		printf("%c",option);
	}
}
