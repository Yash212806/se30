#include<stdio.h>
main()
{
	printf("Enter 1 For Addition");
    printf("\nEnter 2 For Subtraction");
	printf("\nEnter 3 For Multiplication");
	printf("\nEnter 4 For Division");
	 
	 int n;
	 
	 printf("\nEnter choice : ");
	 scanf("%d",&n);
	 
	 int a,b;
	 
	 printf("\nEnter 1st Number : ");
	 scanf("%d",&a);
	 printf("\nEnter 2nd Number : ");
	 scanf("%d",&b);
	 
	 switch(n)
	 {
	 	
	 
	 	case 1 :
	 		printf("Addition : %d",a+b);
	 		break;
	 		
	 	case 2 :
	 		printf("Subtraction : %d",a-b);
	 		break;	
	 	
	 	case 3 :
	 		printf("multiplication : %d",a*b);
	 		break;
	 		
	 	case 4 :
	 		printf("Division : %d",a/b);
	 		break;	
	 		
	 	default : 
	 	    printf("Invalid Choice");
	 	    break;
	 }	
}
