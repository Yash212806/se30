#include <stdio.h>
main()
{
	char a[5],b[5];
	
	printf("Enter string : ");
	scanf("%s",&a);
	
	strcpy(b,a);
	
	printf("\nstring is : %s",b);
}
