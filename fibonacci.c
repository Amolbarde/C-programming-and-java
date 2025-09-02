#include<stdio.h>
int main()
{
	int i,n;
	int first=0,second=1,next;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Fibonacci serise:");
	for(i=0;i<=n;i++)
	{
		printf("%d ,",first);
		next=first+second;
		first=second;
		second=next;
	}
	return 0;
	
}
