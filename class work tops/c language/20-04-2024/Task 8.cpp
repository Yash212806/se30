#include<stdio.h>
main()
{
	int n; //initialization
	
	printf("Enter Number : ");
	scanf("%d",&n);
	int i=n;
	
	while (i>=1) //condition
	{
		printf("%d\n",i);
		i--; 
	}
}
