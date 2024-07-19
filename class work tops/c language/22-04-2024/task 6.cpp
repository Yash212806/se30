#include<stdio.h>

main()
{
	int i,j,k,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)//raw
	{
		for(k=1;k<=n-i;k++)//space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)//colloum
		{
			printf(" *");
		}
		printf("\n");
	}
}
