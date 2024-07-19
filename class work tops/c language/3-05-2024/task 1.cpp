#include<stdio.h>

add()
{
	int a,b;
	
	printf("Enter value : ");
	scanf("%d",&a);
	
	printf("Enter value : ");
	scanf("%d",&b);
	
	printf("\nAddition : %d ",a+b);
	
}

sub()
{
	int a,b;
	
	printf("\nEnter value : ");
	scanf("%d",&a);
	
	printf("Enter value : ");
	scanf("%d",&b);
	
	printf("\nSubtraction : %d ",a-b);
	
	
}

mul()
{
	
	int a,b;
	
	printf("\nEnter value : ");
	scanf("%d",&a);
	
	printf("Enter value : ");
	scanf("%d",&b);
	
	printf("\nmultiplication : %d ",a*b);
	
}
main()
{
   add();
   sub();
   mul();
   	
}

