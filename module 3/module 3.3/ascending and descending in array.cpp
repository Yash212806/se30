#include<stdio.h>

class Myclass{
	public : 
	
	
	Myclass()
	{
	printf("press 1 for Ascending ");
	printf("\npress 2 for Descending");
	printf("\npress 3 for Exit ");
    }
    A()
    {
    	
	int a[4],i,j,temp;
	for(i=0;i<4;i++)
	{
		printf("Enter Number : ");
		scanf("%d" , &a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("\nAscending order is : %d", a[i],a[j] );
	}
    
	}
	B()
    {
    	
	int a[4],i,j,temp;
	for(i=0;i<4;i++)
	{
		printf("Enter Number : ");
		scanf("%d" , &a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("\nDescending order is : %d", a[i],a[j] );
	}
    
	}
};
main()
{
	Myclass obj;
	int choice;
	
	while(1)
	{
		printf("\nEnter Choice : ");
	    scanf("%d",&choice);
	
		if(choice==1)
		{
			obj.A();
		}
		else if(choice==2)
		{
			obj.B();
		}
		else if(choice==3)
		{
			printf("Thank You For Using our website");
		}
		else
		{
			printf("Invalid Choice");
		}
	}
}	
