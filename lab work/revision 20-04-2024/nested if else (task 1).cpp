#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter number 1 : ");//n1 = 120
	scanf("%d",&n1);
	
	printf("Enter number 2 : ");//n2 = 110
	scanf("%d",&n2);
	
	printf("Enter number 3 : ");//n3 = 150
	scanf("%d",&n3);
	
	if(n1>n2)//120>110 (true)
	{
		if(n1>n3)//120>150 (false)
		{
			printf("%d is Greatest",n1);
		}
		else
		{
			printf("%d is Greatest",n3);//output
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d is Greatest",n2);
		}
		else
		{
			printf("%d is Greatest",n3);
		}
	}
	
}
