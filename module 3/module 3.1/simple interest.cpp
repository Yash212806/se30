#include<stdio.h>

main()
{
	double P,R,T;
	
	printf("Enter Principle amt : ");
	scanf("%lf",&P);
	
	printf("Enter Rate : ");
	scanf("%lf",&R);
	
	printf("Enter Time period : ");
	scanf("%lf",&T);
	
	printf("Interest : %lf",(P*R*T)/100);
}
