#include<iostream>
using namespace std;

class Base
{
	public:
	int x,y;
	
	virtual	void fun()													//virtual add kel
	{
		cout<<"Base fun\n";
	}
	void gun()
	{
		cout<<"Base gun\n";
	}
};
class Derived : public Base
{
	public:
	int i,j;
	void sun()
	{
		cout<<"Derived sun"<<"\n";
	}
	void fun()
	{
		cout<<"Derived fun"<<"\n";					
	}
};
int main()
{
	Base *bp = new Derived();			//upcasting        he chalt  (lahanakadun mothyakde byteskde)
	bp->fun();
	bp->gun();
	//bp->sun();					//Error compile time   //Not allowed
	
	cout<<"Size of Base : "<<sizeof(Base)<<"\n";		//16					//12 compiler dependemt
	cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";		//24				//20 complier dependent
	
 return 0;
}									// hya laptop vr pointer he commpiler time la 4 byte ne memory allocate hote.
									// ha ponter compiler dependent aahe.