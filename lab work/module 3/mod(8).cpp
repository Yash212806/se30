#include<stdio.h>

main()
{
	float years;
	
	printf("Enter Year : ");
	scanf("%f",&years);
	
	printf("Number of days = %.1f",(float)365*years);
}
