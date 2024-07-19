#include<stdio.h>
add(int a,int b)
{
	printf("Enter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("\n%d",a);
	printf("\n%d",b);
	return a+b;
}
fac(int n)
{
	int fac=1,i;
	printf("\nEnter N : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}

main()
{
	int a,b;
	printf("\nAddition : %d",add(a,b));
	int n;
	printf("\nFactorial : %d ",fac(n));
}
