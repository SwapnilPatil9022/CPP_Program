#include<iostream>
using namespace std;

class Base
{
	public:
		int i,j;
		static int k;
		
	Base()
	{
		i=10;
		j=20;
	}
	
	void fun()
	{
		cout<<"Base Fun";
	}
};

int Base::k=11;

class Derived:public Base

{
	public:
		int x,y;
		
	Derived()
	{
		x=50;
		y=60;
	}
	
	void gun()
	{
		cout<<"Derived Gun\n";
	}
};

int main()
{
	Base bobj;
	Derived dobj;
	
	//cout<<Sizeof(bobj);
	cout<<Sizeof(dobj);
	
	cout<<bobj.i;
	cout<<bobj.j;
	cout<<dobj.i;
	cout<<dobj.j;
	cout<<bobj.i;
	cout<<bobj.k;
	cout<<dobj.x;
	
	bobj.fun();
	dobj.fun();
	dobj.gun();
	
	return 0;
}