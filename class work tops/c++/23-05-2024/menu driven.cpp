#include<iostream>
using namespace std;

class Myclass{
	public : 
	
	
	Myclass()
	{
	cout<<"press 1 for Addition "<<endl;
	cout<<"press 2 for subtraction "<<endl;
	cout<<"press 3 for Factorial "<<endl;
	cout<<"press 4 for Multiplication "<<endl;
	cout<<"press 5 for Exit "<<endl;
    }
	add()
	{
		long int a,b;
		
		cout<<"Enter A : ";
		cin>>a;
		
		cout<<"Enter B : ";
		cin>>b;
		
		cout<<" Addition : "<<a+b<<endl;
	}
	
	sub()
	{
		long int a,b;
		
		cout<<"Enter A : ";
		cin>>a;
		
		cout<<"Enter B : ";
		cin>>b;
		
		cout<<" subtraction : "<<a-b<<endl;
	}
	
	fac()
	{
		long int n,i,fac=1;
		
		cout<<"Enter N : ";
		cin>>n;
		
		for(i=1;i<=n;i++)
		{
			fac*=i;
		}
		cout<<"Factorial is : "<<fac<<endl;
    }
    
    mul()
	{
		int a,b;
		
		cout<<"Enter A : ";
		cin>>a;
		
		cout<<"Enter B : ";
		cin>>b;
		
		cout<<" Multiplication : "<<a*b<<endl;	
	}
};

main()
{
	Myclass obj;
	
	int choice; 
	while(1)
	{
	cout<<"Enter choice : ";
	cin>>choice;
	
	if(choice==1)
	{
		obj.add();
	}
	else if(choice==2)
	{
		obj.sub();
	}
	else if(choice==3)
	{
		obj.fac();
	}
    else	if(choice==4)
	{
		obj.mul();
	}
	else if(choice==5)
	{
		cout<<"Thank you for using our Website";
		break;
	}
	else
	{
		cout<<"Invalid Choice ";
		break;
	}
    }
}   
