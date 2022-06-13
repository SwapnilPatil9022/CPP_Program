#include<iostream>
using namespace std;

 class Base1
{
 public:
 int i,j;
 Base()
 {
  cout<<"Base constructor\n";
 }
 ~Base()
 {
  cout<"Base destructor\n";
 }
};

class Base2
{
 public:
 int x,y;
 Base()
 {
  cout<<"Base constructor\n";
 }
 ~Base()
 {
  cout<"Base destructor\n";
 }
};
 
 class Derived : public Base2, Base1
 {
	public:
	int a;
	
	Derived()
	{
	cout<<"Derived constructor\n";
	}
	~Derived()
	{
	cout<<"Derived constructor\n";
	}
};
 int main()
 {
  Derived obj;
  
  return 0;
 }