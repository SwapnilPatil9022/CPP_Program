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
	
int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	
	
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

