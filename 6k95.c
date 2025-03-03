#include<stdio.h>
#include<math.h>
int main()
{
	float percentage,total_marks,marks_obtained;
	scanf("%f%f",&total_marks,&marks_obtained);
	percentage=(marks_obtained/total_marks)*100;
	printf("%f\n",percentage);
	return 0;
}
