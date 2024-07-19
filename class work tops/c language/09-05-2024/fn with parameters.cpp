#include<stdio.h>


add(int a,int b)
{
	
	printf("%d",a);
	printf("%d",b);
	printf("\nAddition : %d",a+b);
	
}

fac(int n)
{
	int fac=1,i;
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("\nFactorial : %d ",fac);
	
}

main()
{
    
		
	int a,b;
	
	
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	
	add(a,b);
	
	fac(5);
}
