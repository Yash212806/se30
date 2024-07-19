#include<iostream>
using namespace std;

class myclass{
	public : 
	
	add()
	{
		int a,b;
		
		cout<<"Enter A : ";
		cin>>a;
		
		cout<<"Enter B : ";
		cin>>b;
		
		cout<<" Addition : "<<a+b<<endl;
	}
	
	sub()
	{
		int a,b;
		
		cout<<"Enter A : ";
		cin>>a;
		
		cout<<"Enter B : ";
		cin>>b;
		
		cout<<" subtraction : "<<a-b<<endl;
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
		myclass obj;
		
		obj.add();
		obj.sub();
		obj.mul();
	}

  
