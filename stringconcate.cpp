#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	printf("pls enter your 1st string==");
	scanf("%[^\n]s",a);
	strcpy(b,a);
	printf("youe result is==%s",b);
	
}
