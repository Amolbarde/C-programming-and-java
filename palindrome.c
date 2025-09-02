
#include<stdio.h>
int main()
{
	int num,temp,digit,rev=0;
	printf("Enter integer:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	if(num==rev)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not");
	}
}
