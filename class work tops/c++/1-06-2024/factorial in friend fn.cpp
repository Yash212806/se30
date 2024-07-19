#include<iostream>
using namespace std;
class User{
	private :
		int a,i,fac=1;
		
		friend class Sub;
		
};

class Sub{
	public:
		get(User& t)
		{
			cout<<"A : ";
			cin>>t.a;
			for(t.i=1;t.i<=t.a;t.i++)
			{
				t.fac=t.fac*t.i;
				cout<<"Factorial is : "<<t.fac<<endl;
			}
		}
};
main()
{
	User obj;
	Sub obj1;
	obj1.get(obj);
}
