#include<iostream>
using namespace std;

 class Base 
 {
	 public:
	 int i,j;
	 Base()
	{
	 cout<<"Base constuctor\n";
	}
	~Base()
	{
	 cout<<"Base destrucion\n";
	}
 };
 
 class Derived : public Base
 {
	 public:
	 int a,b,c;
	 
	 Derived()
	{
	 cout<<"Derived constuctor\n";
	}
	~Derived()
	{
	 cout<<"Derived destrucion\n";
	}
 };
 
 class Derived1 : public Derived
 {
	 public:
	 int k,l;
	 
	 Derived1()
	{
	 cout<<"Derived1 constuctor\n";
	}
	~Derived1()
	{
	 cout<<"Derived1 destrucion\n";
	}
 };
 
 int main()
 {
 
  Derived1 dobj;
  
  return 0;
  
 }
  