#include<iostream>
using namespace std;

class G{
	public: 
	
	home()
	{
		
		cout<<"Grandfather have home"<<endl;
	}
};

class F:public G{
	public: 
	car()
	{
		
		cout<<"Father have car"<<endl;
	}
};

class Child:public F{
	public: 
	debt()
	{
		
		cout<<"I have Debt of 3 Cr"<<endl;
	}
};
main()
{
	Child obj;
	obj.home();
	obj.car();
	obj.debt();
}
