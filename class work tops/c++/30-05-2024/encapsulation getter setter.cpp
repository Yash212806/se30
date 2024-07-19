 #include<iostream>
 using namespace std;
 
 class A{
 	public:
 		int n,n1;
 		getter(int a,int b)
 		{
 		   this->n=a;
		   this->n1=b;	
	    }
	    setter()
	    {
	    	cout<<"A : "<<this->n<<endl;
	    	cout<<"B : "<<this->n1<<endl;
		}
 };
 
 main()
 {
 	A obj;
 	obj.getter(10,20);
 	obj.setter();
 }
