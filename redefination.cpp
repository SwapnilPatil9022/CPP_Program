#include<iostream>
using namespace std;		//ekach class madhy jr (fun ,gun,fun,gun) asle kahitri defination jr double double call kela asel tr tyalla Overriding mhantat. 

class Demo
{
 public:
	int i,j;
	
	void fun()		//defination
	{
	cout<<"Inside fun\n";
	}
	void gun()		// defination
	{
	cout<<"Inside gun\n";
	}
};
class Hello : public Demo
{
	public:
		int x,y;
		
		void sun()	//defination
		{
			cout<<"Inside sun\n";
		}
		
		void gun()		//Re-defination     (karan vrti pn void gun aahe) //void gun(int n) he pn chalte.  
		{		
			cout<<"Inside gun of child\n";
		}
};
 int main()
{
 return 0;
}