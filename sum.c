#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter limit:");
	scanf("%d",&n);
    if(n<0)
    {
    	printf("Number is negetive");
    	return 0;
	}
	else
	{
      	for(i=0;i<=n;i++)
      	{
			s=s+i; 
		
    	}
    	printf("sum of %d number is %d",n,s);
    	return 0;
    }
    
}
