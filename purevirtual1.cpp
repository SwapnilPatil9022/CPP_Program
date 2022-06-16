#include<iostream>
using namespace std;

class Base
{
 public:
	int x,y;
				
	void fun()	//1000      //Concrete non virtual
	{
	 cout<<"Base fun\n";
	}
					//2000
	 virtual void gun()      //Concrete virtual 
	{
	 cout<<"Base gun\n";
	}
					//3000
	virtual void sun()        //concrete virtual
    {
	 cout<<"Base sun\n";
	}
		//_____
	virtual void run()=0;		//abstract function 
};

 class Derived : public Base
{
 public:
 int i,j;
			//4000
	void fun()			// Redefination (concrete) function
	{
	 cout<<"Derived fun\n";
	}
				//5000
	virtual void gun()		//Overriding
	{
	 cout<<"Derived gun\n";
	}
				
	 void run()			//6000 //Concrete funtion
	{
	 cout<<"Derived run\n";
	}
};

 int main()
{
	//Base bobj;		//Not allowed
	Derived dobj;		//Allowed
	
	Base *bp = NULL;
	bp =  &dobj;			//Upcasting
	
	cout<<sizeof(Base)<<"\n";				//16
	cout<<sizeof(Derived)<<"\n";			//24
	
	bp->fun();		//Base fun
	bp->gun();		//Derived gun 
	bp->sun();		//Base sun
	bp->run();		//Derived run
	
	return 0;
}