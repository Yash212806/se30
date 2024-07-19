#include<iostream>
using namespace std;
main()
{
	int n,i,a=0,b=1,c;
	
	cout<<"enter value : ";
	cin>>n;
	
	cout<<a<<endl;
	cout<<b<<endl;
	
    for (i=0;i<=n;i++)
	{
	  c=a+b;
	  cout<<c<<endl;
	  
	  a=b;
	  b=c;
	}
}
