#include<stdio.h>

main()
{
	int n;
	
	printf("Enter number of days in year : ");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is not a leap year");
		
	}
}
