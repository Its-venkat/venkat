#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d",num-num/2);
	}
	return 0;
}
