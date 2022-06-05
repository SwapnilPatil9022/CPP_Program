#include<iostream>
using namespace std;

 class Demo
 {
	public:
	int i;
	private:
	int j;
	protected:
	int k;
 };
 class Hello : public Demo
 {
	public:
	int x;
	private:
	int y;
	protected:
	int z;
  
  public:
  void fun()
  {
	cout<<k<<"\n";
  }
 };
 int main()		//Neked function
 {
	cout<<sizeof(Demo)<<"\n";
	cout<<sizeof(Hello)<<"\n";
	
	Demo dobj;
	cout<<dobj.i<<"\n";		//Allowed
//  cout<<dobj.j<<"\n";   //not allowed
//  cout<<dobj.k<<"\n";   //not allowed

	Hello hobj;
	cout<<hobj.x<<"\n";		//Allowed
//	cout<<hobj.y<<"\n";		//not allowed
//	cout<<hobj.z<<"\n";		//not allowed

	cout<<hobj.i<<"\n";		//Allowed
//	cout<<hobj.j<<"\n";		//not allowed
//	cout<<hobj.k<<"\n";		//not allowed

	hobj.fun();
	
	return 0;
} 