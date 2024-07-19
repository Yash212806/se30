#include<iostream>
using namespace std;

class Name{
	public : 
	 name(string n)
	 {
	 	cout<<"Enter Name: "<<n<<endl;
	 	
	 	
	 }
	 name(int n)
	 {
	 	cout<<"Enter roll no. : "<<n<<endl;
	 	
	 	
	 }
	 name(int a,int b)
	 {
	 	cout<<"Enter total marks : "<<a<<endl;
	 	
	 	cout<<"Enter Percentage : "<<b<<endl;
	 	
	 	
	 }
};


main()
{
	Name obj;
	obj.name("Yash");
	obj.name(307);
	obj.name(88,85);
	
}
