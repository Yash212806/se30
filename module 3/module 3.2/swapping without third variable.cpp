#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter value a : ");
	scanf("%d",&a);
	
	printf("Enter value b : ");
	scanf("%d",&b);
	
	printf("Before swapping the values a and b : %d\t%d ",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping the values a and b : %d\t%d ",a,b);
	
}

