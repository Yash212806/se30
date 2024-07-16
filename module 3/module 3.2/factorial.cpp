#include<stdio.h>
main()
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
