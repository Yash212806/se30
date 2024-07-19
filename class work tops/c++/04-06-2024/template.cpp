#include<iostream>
using namespace std;

template<typename T>
T mymax(T x,T y)
{
	return (x>y)?x:y;
}

main()
{
	cout<<mymax<int>(3,5)<<endl;
	cout<<mymax<char>('f','t')<<endl;
}
