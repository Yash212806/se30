#include<iostream>
using namespace std;

class Father{
	public: 
	
	value1()
	{
		
		cout<<"Hello My Child"<<endl;
	}
};
class Child:public Father{
	public: 
	value2()
	{
		
		cout<<"Yes Father"<<endl;
	}
};
main()
{
	Child obj;
	obj.value1();
	obj.value2();
}
