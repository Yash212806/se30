#include<stdio.h>

class Myclass{
	public : 
	
	
	Myclass()
	{
	printf("press 1 for Addition ");
	printf("\npress 2 for subtraction ");
	printf("\npress 3 for divison ");
	printf("\npress 4 for Multiplication ");
	printf("\npress 5 for Exit ");
    }
	add()
	{
		long int a,b;
		
		printf("Enter A : ");
	    scanf("%d",&a);
		
		printf("Enter B : ");
	    scanf("%d",&b);
		
		printf(" Addition : %d",a+b);
	}
	
	sub()
	{
		long int a,b;
		
		printf("Enter A : ");
	    scanf("%d",&a);
		
		printf("Enter B : ");
	    scanf("%d",&b);
		
			printf(" Subtraction : %d",a-b);
	}
	
	div()
	{
		long int n,m,i,fac=1;
		
		printf("Enter N : ");
	    scanf("%d",&n);
		
		printf("Enter M : ");
	    scanf("%d",&m);
		
	    printf(" Divison : %.2f",(float)n/m);
    }
    
    mul()
	{
		int a,b;
		
		printf("Enter A : ");
	    scanf("%d",&a);
		
		printf("Enter B : ");
	    scanf("%d",&b);
		
	    printf(" Multiplication : %d",a*b);
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
		obj.add();
	}
	else if(choice==2)
	{
		obj.sub();
	}
	else if(choice==3)
	{
		obj.div();
	}
    else	if(choice==4)
	{
		obj.mul();
	}
	else if(choice==5)
	{
		printf("Thank You For Using Our Website");
		break;
	}
	else
	{
		printf("Invalid Choice ");
		break;
	}
    }
}   
