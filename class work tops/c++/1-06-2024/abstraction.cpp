#include<iostream>
 using namespace std;
 
 class Employer{
 	public: 
 	 virtual show()=0;//pure virtual method
 };
 
 class Uday:public Employer{
 	public :
 		show()
 		{
 			cout<<"Uday Got 6000 salary "<<endl;
 			
		}		
 }; 
 class Joshi: public Employer{
 	public:
 		show()
        {
        	cout<<"Joshi Got 2000 Salary "<<endl;
		}
 };
 class Sujeet: public Employer{
 	public:
 		show()
 		{
 		  cout<<"Sujeet Got 200000 salary "<<endl;	
		}
 };
 main()
 {
 	Uday obj;
 	obj.show();
 	Joshi obj1;
 	obj1.show();
 	Sujeet obj2;
 	obj2.show();
 }
