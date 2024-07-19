#include<stdio.h>

main()
{
	int n;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	(n%2==0)?printf("%d is Even ",n):printf("%d is Odd",n);
}
