#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int n;
	printf("please enter your string");
	gets(a);
	//scanf("%[^\n]s",a);
	n=strlen(a);
	printf("%d",n);
}
