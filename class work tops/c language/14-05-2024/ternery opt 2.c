#include<stdio.h>

main()
{
	int n;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	
	(n==0)?printf("%d is zero",n):(n%2==0)?printf("%d is even ",n):printf(" %d is odd ",n);
}
