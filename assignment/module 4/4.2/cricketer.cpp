 #include<iostream>
 using namespace std;
 class Cricketer{
 	public : 
 	string n;
 	 Cricketer()
 	 { 
 	 string a,b;
 	   cout<<"Enter name of Batsman : ";
 	   cin>>a;
 	   cout<<"Country : ";
 	   cin>>b;
 	   this->n=a;
	 }
 };
 class Batsman:public Cricketer{
 	public: 
 	
 	 Batsman()
 	 {
 	 	int x,y,z;
 	 	cout<<"Total runs : ";
 	 	cin>>x;
 	 	cout<<"Average runs : ";
 	 	cin>>y;
 	 	cout<<"Best Performance : ";
 	 	cin>>z;
 	 	
 	 	cout<<"name of Batsman : "<<this->n<<endl;
 	 	cout<<"Total runs : "<<x<<endl;
 	 	cout<<"Average runs : "<<y<<endl;
 	 	cout<<"Best Performance : "<<z;
	}
 };
 main()
 {
 	Batsman obj;
 }
