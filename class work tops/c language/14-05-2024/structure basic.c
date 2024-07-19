#include<stdio.h>

struct mystructure{
	int a,b;
}s1;

main()
{
	//struct mystructure s1;
	printf("Enter value 1 : ");
	scanf("%d",&s1.a);
	
	printf("Enter value 2 : ");
 	scanf("%d",&s1.b); 
 	
 	printf("%d",s1.a);
 	printf("\n%d",s1.b);
}

