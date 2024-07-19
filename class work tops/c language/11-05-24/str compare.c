#include <stdio.h>
main()
{
	char a[5],b[5];
	
	printf("Enter string : ");
	scanf("%s",&a);
	
	printf("\nEnter string : ");
	scanf("%s",&b);
	
	int result = strcmp(a,b);
	
	printf("\nstring is : %d",result);
}
