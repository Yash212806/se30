#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	
	printf("/nEnter number 2 : ");
	scanf("%d",&n2);
	
	if(n1>n2)
	{
		printf("%d is greatest",n1);
	}
	else 
	{
		printf("%d is greatest",n2);
	}	
}
