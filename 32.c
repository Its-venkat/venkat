#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],a[100];
	scanf("%s%s",&s,&a);
	strcat(s,a);
	printf("%s",s);
	return 0;
}
