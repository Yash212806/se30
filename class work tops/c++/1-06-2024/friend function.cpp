#include<iostream>
using namespace std;
class User{
	private :
		int a,b;
		
		friend class Sub;
		
};

class Sub{
	public:
		get(User& t)
		{
			cout<<"A : ";
			cin>>t.a;
			cout<<"B : ";
			cin>>t.b;
			cout<<"Addition : "<<t.a+t.b<<endl;
		}
};
main()
{
	User obj;
	Sub obj1;
	obj1.get(obj);
}
