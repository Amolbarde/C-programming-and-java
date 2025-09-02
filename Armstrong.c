#include<stdio.h>
int main()
{
	int num,original,reminder,result=0;
	printf("Enter a 3-digit number:");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		reminder=num%10;    // last digit
		result+=(reminder*reminder*reminder);
		num=num/10;
	}
	if(result==original)
	{
		printf("%d is an Armstrong",original);
	}
	else
	{
		printf("%d is not Armstrong number",original);
	}
	
}
