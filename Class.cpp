#include<iostream>
using namespace std;
 class MyClass
 {
	private:
	static int st_var;
	
	public:
	MyClass()
 {
	st_var++;
 }
	static int getStaticVar()
 {
	return st_var;
 }
};
 int MyClass::st_var = 0;
 
 int main()
 {
	MyClass ob1,ob2,ob3;
	
	cout<<"Number of objects:"<<MyClass::getStaticVar();
 }