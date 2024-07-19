#include<iostream>
using namespace std;
main()
{
	int i=1;
	do{
		int j=1;
		do{
			cout<<" *";
			j++;
		}while(j<=i);
		cout<<endl;
		i++;
	}while(i<=6);
}
