#include<iostream>
using namespace std;

	void callValue(int no)
	{
		no++;
	}
 
	void callAddress(int *p)
	{
		(*p)++;
	}

	void callRefrence(int &ref)
	{
		ref++;
	}

int main() 
{
	int a = 10,b = 10,c = 10;
	
	callValue(a);
	cout<<a<<"\n";
	
	callAddress(&b);
	cout<<b<<"\n";
	
	callRefrence(c);
	cout<<c<<"\n";
	
	return 0;
}