#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		if(i==n/2)
		{
			break;
		}
	}
}

	
