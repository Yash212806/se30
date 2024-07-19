#include<iostream>
using namespace std;

class F{
	public: 
	
	F(int a,int b)
	{
		
		cout<<"A : "<<a<<endl;
		cout<<"B : "<<b;
	}
};
main()
{
	F obj(10,20);
}
