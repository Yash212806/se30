#include<stdio.h>
main()
{
	int n;
	
	printf("Enter number 1 : ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("%d is niether even nor odd",n);
	}
	else if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}
