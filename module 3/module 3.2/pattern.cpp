#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)//raw
	{
		for(k=1;k<=5-i;k++)//space
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)//colloum
		{
			printf("*");
		}
		printf("\n");
	}
}
