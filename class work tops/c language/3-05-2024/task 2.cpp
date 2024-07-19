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

fac()
{
	int n,i,fac=1;
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	printf("\nFactorial : %d ",fac);
}


main()
{
   fac();
}

