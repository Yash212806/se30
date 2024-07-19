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
class C:public B{
	public:
		home3()
		{
			cout<<"\nThis is Home 3";
		}
};
class D:public C{
	public:
		home4()
		{
			cout<<"\nThis is Home 4";
		}
};
main()
{
	D obj1;
	obj1.HOME1();
	obj1.home2();
	obj1.home3();
	obj1.home4();
	
	
}
