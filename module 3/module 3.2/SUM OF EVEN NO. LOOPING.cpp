#include<stdio.h>

int main()
{
    int num,i, count = 1, sum = 0;
    for(i=1;i<=10;i++)
    {
	
    printf("Enter the limit\n");
    scanf("%d", &num);
    
        if(count%2 == 0)
        {
            sum = sum + count;
        }
        count++;
    }
    printf("\n%d",sum);
    
}
