#include<stdio.h>
main()
{
	FILE *fp;
	
	fp = fopen("test1.txt","r");
	
	char a[100];
	int i;
	
	while(fgets(a,100,fp)!=NULL)
	{
	
	printf("%s",a);
	
    }
	fclose(fp);
	
}


