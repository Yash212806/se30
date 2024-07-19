#include<iostream>
using namespace std;

class A{
	public:
		int n;
		A()
		{
			cout<<"Press 1 to Register Account"<<endl;
			cout<<"Press 2 for Withdrawl"<<endl;
			cout<<"Press 3 to Deposit"<<endl;
			cout<<"Press 4 to Exit"<<endl;
		}
		Register()
		{
			int a,b;
			cout<<"Enter Account number : ";
			cin>>a;
			cout<<"Enter Opening Amount : ";
			cin>>b;
			cout<<"Account Opening Balance : "<<b<<endl;
			this->n=b;
		}
		Withdrawl()
		{
			int a;
			cout<<"Enter Amount : ";
			cin>>a;
			if(a>=this->n)
			{
				cout<<"Insuffiecient Balance"<<endl;
			}
			else
			{
			
			cout<<"Remaining Balance : "<<this->n-a<<endl;
		    }
		    
		}
		Deposit()
		{
			int a;
			cout<<"Enter Amount : ";
			cin>>a;
			cout<<"Current Balance : "<<a+this->n<<endl;
			
		}
		
};

main()
{
	A obj;
	int choice;
	while(1)
	{
		cout<<"Enter choice : ";
		cin>>choice;
		if(choice==1)
		{
			obj.Register();
		}
		else if(choice==2)
		{
			obj.Withdrawl();
		}
		else if(choice==3)
		{
			obj.Deposit();
		}
		else if(choice==4)
		{
			cout<<"Thank You For Using Our Website";
			break;
		}
		else
		{
			cout<<"Invalid Choice";
			break;
		}
	}
}

