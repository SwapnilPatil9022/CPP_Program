#include<iostream>

using namespace std;

class Demo
{
 public:
	int Addition(int no1,int no2)
	{
	int Ans = 0;
	Ans = no1 + no2;
	return Ans;
	}
	
	int Addition(int no1,int no2,int no3)
	{
	int Ans = 0;
	Ans = no1 + no2 + no3;
	return Ans;
	}
	

	int Addition(int no1,int no2,int no3,int no4)
	{
	int Ans = 0;
	Ans = no1 + no2 + no3 + no4;
	return Ans;
	}
	
};
 int main()
 
{
	Demo obj;
	int ret = 0;
	
	ret = obj.Addition(10,11);
	cout<<ret<<"\n";
	
	ret = obj.Addition(10,11,21);
	cout<<ret<<"\n";
	
	ret = obj.Addition(10,11,21,51);
	cout<<ret<<"\n";
	
 return 0;
}