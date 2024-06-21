 #include<iostream>
using namespace std;

template<typename T>
T mymax(T x,T y)
{
	cout<<"Before Swaping : "<<x<<" "<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"After Swaping  : "<<x<<" "<<y;
}

main()
{
	int n1,n2;
	cout<<"Enter number 1 : ";
	cin>>n1;
	cout<<"Enter number 2 : ";
	cin>>n2;
	mymax(n1,n2);
	
	
}
