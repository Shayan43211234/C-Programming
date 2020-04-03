#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	char b[100];
	scanf("%[^\n]s",b);
	strcpy(a,b);
	printf("%s",a);
}
