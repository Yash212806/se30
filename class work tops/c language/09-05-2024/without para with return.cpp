#include<stdio.h>


add()
{
	int a,b;
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("\n%d",a);
	printf("\n%d",b);
	printf("\nAddition : %d",a+b);
	
}

fac()
{
	int n,fac=1,i;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
	
}

main()
{

	
	printf("\n%d",add());
	
	printf("\nfactorial : %d",fac());
}
