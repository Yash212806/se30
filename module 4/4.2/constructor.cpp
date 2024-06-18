#include<iostream>
using namespace std;
class A{
	public :
		A()
		{
			int a,b;
			
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"addition : "<<a+b<<endl;
			cout<<"substraction : "<<a-b<<endl;
			cout<<"multiplication : "<<a*b<<endl;
			cout<<"division : "<<(float)a/b<<endl;
		}
};
main()
{
	A obj;
}
