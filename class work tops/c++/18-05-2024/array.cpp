#include<iostream>
using namespace std;

main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter value : ";
		cin>>a[i];
	}
	for(i=0;i<=5;i++)
	{
		cout<<"Array is : "<<a[i]<<endl;
	}
}
