#include<iostream>
using namespace std;
class A{
	public:
		h()
		{
			cout<<"Hello"<<endl;
		}
};		
	class B{
		public: 
		h()
		{
			
			cout<<"Welcome";
		}
	};
	class C:public A,public B{
		public : 
		h()
		{
			A::h();
			B::h();
			cout<<"Hello World";
		}
	};
	main()
	{
		C obj;
		obj.h();
	}

