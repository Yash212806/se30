#include<stdio.h>
main()
{
	int a[4],i,sum=0;
	
	for (i=0;i<4;i++)
	{
		printf("ENTER VALUE : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		sum=sum+a[i];
		
	}
	printf("sum is %d",sum);
}
