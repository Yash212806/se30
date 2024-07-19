#include<stdio.h>
main()
{
	
	int i,j;
	char a[5],b[5],c[5];
	
	printf("Enter String : ");
	gets(a);
	
	printf("Enter String : ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		c[i]=b[j];
		i++;
	}
	c[i]='\0';
	printf("\nString is : %s",c);
	
	
	
	
	
	
	
	   
	
}
