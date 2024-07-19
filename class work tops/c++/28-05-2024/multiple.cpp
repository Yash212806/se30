#include<iostream>
using namespace std;
class A{
	public:
		HOME1()
		{
			cout<<"\nHello";
		}
};
class B{
	public:
		hOME2()
		{
			cout<<"\nWelcome";
		}
};
class C:public A,public B{
	public:
		home3()
		{
			cout<<"\nThis is Home 3";
		}
};
main()
{
	C obj;
	obj.HOME1();
	obj.hOME2();
	obj.home3();
	
}
