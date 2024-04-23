#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Age : ");
	scanf("%d",&n);
	
	if(n>=100)
	{
		printf("invalid age!!",n);
	}
	
	else if (n>=18)
	{
		printf("%d is Eligible for vote!!",n);
	}
	else
	{
		printf("%d is Not eligible for vote!!",n);
	}
}
