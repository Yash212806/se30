#include<iostream>
using namespace std;

class Fac{
	public : 
	
	Fac()
	{
		cout<<"Welcome to our website "<<endl;
	}
	
	fac()
	{
		int n,i,fac=1;
		
		cout<<"Enter N : ";
		cin>>n;
		
		for(i=1;i<=n;i++)
		{
			fac*=i;
		}
		cout<<"Factorial is : "<<fac<<endl;
    }
		~Fac()
		{
			cout<<"Thank you for using our website ";
		}
	
};

main()
{
	Fac obj;
	obj.fac();
	
}
