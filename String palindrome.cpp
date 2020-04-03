#include<stdio.h>
#include<string.h>
main()
{
	int c;
	char a[100],b[100],d[100];
	printf("\npls enter your string\n");
	//scanf("%[^\n]s",a);
	gets(a);
	c=strlen(a);
	for(int i=0;i<c;i++)
	{
		b[i]=a[i];
	}
	if(strcmp(a,strrev(b))==0)
	{
		printf("\nyour given string is a palindrome\n");	
	}	
	else
		printf("\nyour given string is't palindrome\n");
}
