#include<iostream>
using namespace std;

class A{
	public : 
	string a,b,c;
	int numberofguest,time,numberofserver,Totalfoodcost,TotalCost;
	double cost1,cost2,cost3;
	float AverageCost;
	Event()
	{
	    cout<<"Enter Name Of The Event : ";
	    cin>>a;
	    cout<<"Enter Customer's First Name: ";
	    cin>>b;
	    cout<<"Enter Customer's Last Name : ";
	    cin>>c;
		cout<<"Enter Number of Guest's : ";
	    cin>>numberofguest;
	    cout<<"Enter Time Period of the Event in Minutes : ";
	    cin>>time;
	}
	costing()
	{
		const double CostPerHour = 18.50;
        const double CostPerMinute = 0.40;
        const double CostOfDinner = 20.70;
        
        numberofserver = (numberofguest) / 20.0;// Calculate the number of servers required
		
		cost1 = (time/ 60.0) * CostPerHour;
        cost2 = (time % 60) * CostPerMinute;
        cost3 = cost1 + cost2; // Calculate the cost of one server
        
        Totalfoodcost = numberofguest*CostOfDinner;
        
        AverageCost = Totalfoodcost / numberofguest;
        
        TotalCost = Totalfoodcost + ((cost3) * numberofserver);
		 
	}
	
	Display()
	{
		cout<<"\n\n\n************ESTIMATE FOR : "<<b<<c<<"*************"<<endl;
		cout<<"Number of the event: "<<a<<endl;
		cout<<"Number of servers : "<<numberofserver<<endl;
		cout<<"The cost for servers : "<<cost3<<endl;
		cout<<"The cost for Food : "<<Totalfoodcost<<endl;
		cout<<"Average Cost per person : "<<AverageCost<<endl<<endl<<endl;
		cout<<"Total Cost is : "<<TotalCost<<endl;
		cout<<"Please deposit 25% amount to reserve the event!"<<endl;
		float depositamt = TotalCost * .25;
		cout<<"Deposit needed is : "<<depositamt<<endl;
		
	}
};

main()
{
	cout<<"**************EVENT MANAGMENT SYSTEM**************"<<endl 	;
	A obj;
	obj.Event();
	obj.costing();
	obj.Display();
}
