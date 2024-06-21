#include<iostream>
using namespace std;
class A{
	private :
		int a,b;
		
		friend class B;
		
};

class B{
	public:
		max(A& t)
		{
			cout<<"A : ";
			cin>>t.a;
			cout<<"B : ";
			cin>>t.b;
			if(t.a>t.b)
			{
				cout<<"Max number : "<<t.a;
			}
			else
			{
				cout<<"Max number : "<<t.b;
			}
		}
};
main()
{
	A obj;
	B obj1;
	obj1.max(obj);
}
