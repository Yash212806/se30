#include<stdio.h>
main()
{
	
	int i;
	char a[5],b[5];
	
	printf("Enter String : ");
	gets(a);
	
	printf("\nOriginal string is : %s ",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("\nstring is : %s",b);
}
