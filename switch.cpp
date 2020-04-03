#include<stdio.h>
main()
{
	char o;
	printf("enter your choice to print a colour");
	printf("\nyour colour must be with in RED=R,BLUE=B,GREEN=G");
	scanf("%c",&o);
	switch(o=toupper(getchar()))
	{
		case 'R':
			printf("\nRED\n");
			break;
		case 'B':
			printf("\nBLUE\n");
			break;
		case 'G':
			printf("\nGREEN\n");
			break;
	}
}
