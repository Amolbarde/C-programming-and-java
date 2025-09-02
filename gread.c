#include<stdio.h>
int main()
{
	int marks;
	printf("Enter markes :");
	scanf("%d",&marks);
	if(marks<=100 && marks>=90 )
	{
		printf("A+ Gread");
	}
	else if(marks<=89 && marks>=80)
	{
		printf("A gread");
	}
	else if(marks<=79 && marks>=70)
	{
		printf("B gread");
	}
	else if(marks<=69 && marks>=60)
	{ 
	printf(" C gread");
	}
	else if(marks<=59 && marks>=40)
	{
		printf("pass");
	}
	else
	{
		printf("Fail");
	}
}
