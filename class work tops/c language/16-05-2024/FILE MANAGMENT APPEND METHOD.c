#include<stdio.h>
main()
{
	FILE *fp;
	
	fp = fopen("test1.txt","a");
	fprintf(fp,"\nHELLO THIS IS APPEND METHOD ");
	fclose(fp);
	
}


