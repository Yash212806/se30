#include<stdio.h>
main()
{
	int a[4],i,b[4];
	
	
	
	for(i=0;i<4;i++)
	{
		printf("Enter values : ");
	    scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<4;i++)
	{
		printf("Numbers are : %d ",a[i]);
		
	}
	printf("\n*****************");
	for(i=0;i<4;i++)
	{
		printf("\nEnter values : ");
	    scanf("%d",&b[i]);
		
	}
	
	for(i=0;i<4;i++)
	{
		printf("Numbers are : %d ",b[i]);
		
	}
	printf("\n*****************");
	
	for(i=0;i<4;i++)
	{
		printf("\naddition  : %d ",a[i]+b[i]);
		
	}
	printf("\n*****************");
	
	for(i=0;i<4;i++)
	{
		printf("\nsubtarction  : %d ",a[i]-b[i]);
		
	}
	printf("\n*****************");
	
	for(i=0;i<4;i++)
	{
		printf("\nmultiplication  : %d ",a[i]*b[i]);
		
	}
	printf("\n*****************");
	
	for(i=0;i<4;i++)
	{
		printf("\nDivision  : %f ",(float)a[i]/b[i]);
		
	}
	
	
}

