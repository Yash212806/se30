#include<iostream>
using namespace std;
class A{
	public:
		HOME1()
		{
			cout<<"\nHello";
		}
};
class B:public A{
	public:
		home2()
		{
			cout<<"\nWelcome";
		}
};
class C:public A{
	public:
		home3()
		{
			cout<<"\nThis is Home 3";
		}
};
main()
{
	B obj;
	obj.HOME1();
	obj.home2();
	
	C obj1;
	obj1.HOME1();
	obj1.home3();
	
	
	
}
