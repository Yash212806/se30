#include<stdio.h>
main()
{
	int n,i,count=0;
	
	for(i=1;i<=10;i++)
	{
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	if(n%2==0)
    	{
    		count++;
		}
		
    }
    printf("%d",count);
	
	
    
}
