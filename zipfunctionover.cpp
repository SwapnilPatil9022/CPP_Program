#include<iostream>

using namespace std;

 class Demo
{
	public
 
void fun()
{
	cout<<"Inside fun with no parameters"<<endl;
}
 void fun(int i)
{
	cout<<"Inside fun with one parameters"<<endl;
}
 void fun(int i,int j)
{
	cout<<"Inside fun with two parameters"<<endl;
}
 
  void gun(char c, int i)
{
	cout<<"Inside gun with int & char as parameters"<<endl;
}
 void gun(int i,char c)
{
	cout<<"Inside gun with char & int as parameters"<<endl;
}
 void mun(signed int i)
{
	cout<<"In function mun which except signed int"<<endl;
}
void mun(unsigned int i)
{
	cout<<"In function mun which except unsigned int"<<endl;
}
