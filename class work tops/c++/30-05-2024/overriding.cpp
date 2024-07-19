#include<iostream>
using namespace std;
class A{
	public:
		h()
		{
			cout<<"Hello"<<endl;
		}
};		
	class B:public A{
		public: 
		h()
		{
			A::h();
			cout<<"Welcome";
		}
	};
	
	main()
	{
		B obj;
		obj.h();
	}

