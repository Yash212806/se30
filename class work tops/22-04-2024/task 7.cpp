#include<stdio.h>
main()
{
	int i=1; //initialization
	
	while (i<=6) //condition
	{
		int j=1;
		
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
