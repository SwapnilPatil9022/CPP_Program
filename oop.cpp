#include<iostream>
using namespace std;

class Arithematic
{
	public:
	
	int iNo1;
	int iNo2;
	
	
	
	Arithmatic()   
	{
	 cout<<"Inisde default constructor\n";
	 iNo1 = 0;
	 iNo2 = 0;
	}
	
	Arithmatic(int A, int B)
	{
	 cout<<"Inisde parameterised constructor\n";
	 iNo1 = 0;
	 iNo2 = 0;
	}
	
	~Arithmatic()
	{
	 cout<<"Inside Destrouctor\n";
	}
	
	int Addition()
	{
	 int iAns = 0;
	 iAns = iNo1 + iNo2;
	 return iAns;
	}
	
	int Substraction()
	{
	 int iAns = 0;
	 iAns = iNo1 + iNo2;
	 return iAns; 
	}
};

int main()
{
	auto int iVslue1 = 0; iValue2 = 0; iRet = 0;
	
	cout<<"Enter first number\n";
	cin>>iValue1;
	
	cout<<"Enter second number\n";
	cin>>iValue2;
	
	Arithmatic obj1();
	Arithmatic obj2(iValue 1, iValue 2);
	
	return 0;
}