#include<iostream>
using namespace std;

template<typename T>
T mymax(T x,T y,T z)
{
	return (x>y&&x>z)?x:(y>z&&y>x)?y:z;
}

main()
{
	cout<<mymax<int>(3,5,10)<<endl;
	cout<<mymax<char>('f','t','a')<<endl;
	cout<<mymax<float>(3.1,5.5,10.6)<<endl;
}
