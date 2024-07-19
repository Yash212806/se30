#include<iostream>
using namespace std;

class Wheel{
	public:
		virtual tyre()=0;
	
};
class Rickshaw:public Wheel{
	public: 
	 tyre()
	 {
	 	return 3;
	 }
};
class Car:public Wheel{
	public: 
	 tyre()
	 {
	 	return 4;
	 }
};
class Activa:public Wheel{
	public: 
	 tyre()
	 {
	 	return 2;
	 }
};
main()
{
	Rickshaw obj;
	cout<<"tyres for Rickshaw : "<<obj.tyre()<<endl;
	Car obj1;
	cout<<"tyres for Car : "<<obj1.tyre()<<endl;
	Activa obj2;
    cout<<"tyres for Activa : "<<obj2.tyre()<<endl;
}

