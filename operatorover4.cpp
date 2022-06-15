#include<iostream>
using namespace std;

class Demo 
{
 public:			//private
	int x;
	int y;
	
	Demo(int i=10,int j=20)
	{
		x=i;
		y=j;
	}	
};

bool operator == (Demo op1, Demo op2)
{
	if((op1.x == op2.x) && (op1.y == op2.y))
	{
		return true;
	}
	else
	{
		return false;
	}
}
	
int main()
{
	Demo obj1(11,21);
	Demo obj2(11,21);
	
	
	if(obj1 == obj2)	//==(obj1,obj2)			//error      //solution next file madhy aahe 
	{
		cout<<"Object are same\n";
	}
	else
	{
		cout<<"Object are different\n";
	}	
	
	return 0;
}

