#include<stdio.h>
#include<string.h>
main()
{
	int x,i;
	char s[101];
	gets(s);
	x=strlen(s);
	if(s[0]>'4'&&s[0]!='9')
	s[0]='9'-s[0]+'0';
	for(i=1;i<x;i++)
	{
		if(s[i]>'4')
		s[i]='9'-s[i]+'0';
	}
	puts(s);
}