#include<stdio.h>
main()
{
	
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	switch(n)
	{
		
		case 1:
			printf("%d st day is monday ",n);
			break;
			
		case 2:
			printf("%d nd day is Tuesday",n);
			break;
			
		case 3:
			printf("%d rd day is Wednesday",n);
			break;
			
		case 4:
			printf("%d th day is Thursday",n);
			break;
		
		case 5:
			printf("%d th day is Friday",n);
			break;
			
		case 6:
			printf("%d th day is Saturday",n);
			break;
			
		case 7:
			printf("%d th day is Sunday",n);
			break;
			
		default:
			printf("Invalid input ",n);
	}
}
