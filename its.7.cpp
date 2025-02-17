#include<stdio.h>
int main()
{
	float total_marks,marks_obtained,p;
	scanf("%f%f",&total_marks,&marks_obtained);
	p=(marks_obtained/total_marks)*100;
	printf("%f",p);
	return 0 ;
}
