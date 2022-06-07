#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;                //constant characteristic aahe   badalnar nahi.
		
		Demo(int a, int b):j(b)			//member initilisation list
		{
			i=a;
		}
		void fun()
		{
			cout<<"Inside fun\n";
			i++;				//Allowed
			// j++;       Not allowed
		}
				//b is a constant input argument
		void gun(int a, const int b)const		//constant function / behaviour  	//int a,int b he parameter aahet 	
		{
			int x = 10;      							//local variable aahe
			const int y = 20;						//constant local variable			
			cout<<"Inside gun\n";
			
			//i++;			    		//Not allowed
			//j++;         				 //Not allowed
			x++;		    //Allowed
			//y++;							//Not allowed
			
			a++;			//Allowed								//input argument   		//call by value
			//b++;							//Not allowed		//constant aahe line(21)
		}
};

int main()
{
	Demo obj1(11,21);
	const Demo obj2(11,21);
 
	obj1.fun();
	obj1.gun(10,20);
 
	//obj2.fun();
	obj2.gun(10,20);
 
	return 0;
}