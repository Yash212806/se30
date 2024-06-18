#include<iostream>
using namespace std;

class Student{
	public: 
	int r;
	 A()
	 {
	 	cout<<"Roll no : ";
	 	cin>>r;
	 }
	
};
class Test:public Student{
	public: 
	int p,m;
	 B()
	 {
	 	cout<<"marks in Physics : ";
	 	cin>>p;
	 	cout<<"marks in maths : ";
	 	cin>>m;
	 }
};
class Result:public Test{
	public:
		C()
		{
			cout<<"Roll no     : "<<r<<endl;
			cout<<"Physics     : "<<p<<endl;
			cout<<"Maths       : "<<m<<endl;
			cout<<"Total Marks : "<<p+m<<endl;
		}
};
main()
{
	Result obj;
	obj.A();
	obj.B();
    obj.C();	
}
