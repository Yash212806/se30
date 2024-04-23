#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter Value 1 : ");
	scanf("%d",&a);
	
	printf("Enter Value 2 : ");
	scanf("%d",&b);
	
	printf("Addition = %d ",a+b);
	
	printf("substraction = %d ",a-b);
	
	printf("multiplication = %d ",a*b);
	
	printf("Division = %.2f ",(float)a/b);
	
	printf("Modulous = %d ",a%b);
}
