#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	
	printf("\nEnter number 2 : ");
	scanf("%d",&n2);
	
	printf("\nBefore swapping the value of 1 & 2 : %d\t%d",n1,n2);
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	printf("\nAfter swapping value of 1 & 2 : %d\t%d",n1,n2);
	

	
	
	
}
