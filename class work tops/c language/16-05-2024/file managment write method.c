#include<stdio.h>
main()
{
	FILE *fp;
	
	fp = fopen("test1.txt","w");
	fprintf(fp,"HELLO THIS IS WRITE METHOD ");
	fclose(fp);
	
}


