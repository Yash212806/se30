#include<iostream>
using namespace std;

class A{
	public:
		int n;
		string m;
		A()
		{
			cout<<"Press 1 to Register Account"<<endl;
			cout<<"Press 2 for Withdrawl"<<endl;
			cout<<"Press 3 to Deposit"<<endl;
			cout<<"press 4 to display name and balance"<<endl;
			cout<<"Press 5 to Exit"<<endl;
		}
		Register()
		{
			int a,b,y;
			string x;
			
			cout<<"Enter Account Holders name : ";//name from user
			cin>>x;
			this->m=x;
			cout<<"Enter Account number : ";//user input
			cin>>a;
			cout<<"Type Of Account : Press 1. Current\t2. Saving"<<endl;
			cin>>y;
			cout<<"Enter Opening Amount : ";
			cin>>b;
			cout<<"Account Balance : "<<b<<endl;
			this->n=b;//this pointer assigned to balance amt
		}
		Withdrawl()
		{
			int a;
			cout<<"Enter Amount : ";//withdrawal amt
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
			cout<<"Enter Amount : ";//deposit amt
			cin>>a;
			cout<<"Current Balance : "<<a+this->n<<endl;
			
		}
		display()
		{
			cout<<"Name : "<<this->m<<endl;//displaying details
			cout<<"Balance : "<<this->n<<endl;
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
			obj.display();
		}
		else if(choice==5)
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

