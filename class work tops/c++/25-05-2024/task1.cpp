#include<iostream>
using namespace std;

class A{
	public: 
	
	name()
	{
		int n;
		cout<<"Enter Name : "<<endl;
	cin>>n;
	fflush(stdin);
		
	}
};

class B:public A{
	public: 
	R()
	{
		int r;
		cout<<"Enter Roll.no : "<<endl;
	cin>>r;
		
	}
};

class C:public B{
	public: 
	marks()
	{
		int e,s,m;
		cout<<"Enter Marks in English : "<<endl;
	cin>>e;
	
	cout<<"Enter Marks in Science: "<<endl;
	cin>>s;
	
	cout<<"Enter Marks in Maths : "<<endl;
	cin>>m;
	
		
		int t;
		t=e+s+m;
		cout<<"Total Marks : "<<t<<endl;

		
	}
};
main()
{
	
	
	C obj;
	obj.name();
	obj.R();
	obj.marks();
}
