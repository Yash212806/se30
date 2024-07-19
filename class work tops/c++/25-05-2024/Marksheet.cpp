#include<iostream>
using namespace std;

class Name{
	public : 
	 string n;
	 name()
	 {
	 	cout<<"Enter Name : ";
	 	cin>>n;
	 	
	 }
};
class Rollno:public Name{
	public : 
	int r;
	rollno()
	{
		cout<<"Enter Roll no. : ";
	 	cin>>r;
	}
};
class Marks:public Rollno{
	public:
		int m1,m2,m3,t,p;
		marks()
		{
			cout<<"Enter marks obtained in English : ";
	 	    cin>>m1;
	 	    
	 	    cout<<"Enter marks obtained in Science : ";
	 	    cin>>m2;
	 	    
	 	    cout<<"Enter marks obtained in Maths : ";
	 	    cin>>m3;
	 	    
	 	    t=m1+m2+m3;
	 	    p=t*100/300;
	 	    
	 	    cout<<"English : "<<m1<<endl;
	 	    cout<<"Science : "<<m2<<endl;
	 	    cout<<"Maths   : "<<m3<<endl;
	 	    cout<<"Total Marks : "<<t<<endl;
	 	    cout<<"Percentage : "<<p;
		}
};

main()
{
	Marks obj;
	obj.name();
	obj.rollno();
	obj.marks();
	
	
}
