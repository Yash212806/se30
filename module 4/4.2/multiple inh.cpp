#include<iostream>
using namespace std;

class Person{
	public:
		string n;
		int a;
		Name()
		{
			cout<<"Enter name : ";
		   cin>>n;
		}
		age()
		{
			cout<<"Enter age : ";
		   cin>>a;
		}
};
class Student{
	public :
		int p;
		Percentage()
		{
		cout<<"Enter percentage : ";
		   cin>>p;	
		}
};
class Teacher{
	public :
		int s;
		salary()
		{
			cout<<"Enter salary : ";
		   cin>>s;
		}
};
class initialize:public Person,public Student,public Teacher{
	public :
		
		read()
		{
			cout<<"Name : "<<n<<endl;
			cout<<"Age : "<<a<<endl;
			cout<<"Percentage : "<<p<<endl;
			cout<<"Salary : "<<s<<endl;
		}
};
main()
{
	initialize obj;
	obj.Name();
	obj.age();
	obj.Percentage();
	obj.salary();
	obj.read();
}
