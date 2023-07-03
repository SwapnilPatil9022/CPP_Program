
#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
	public:
		T No1;
		T No2;

		Arithmetic(T a,T b)
		{
			No1 = a;
			No2 = b;
		}

		T Addition()
		{
			T Ans;
			Ans = No1 + No2;
			return Ans;
		}
		T Substraction()
		{
			T Ans;
			Ans = No1 - No2;
			return Ans;
		}
};

int main()
{
	Arithmetic <int>iobj(10,11);
	int ret = iobj.Addition();
	cout<<"Addition is : "<<ret<<"\n";

	Arithmetic <double>dobj(10.9,11.5);
	double dret = dobj.Addition();
	cout<<"Addition is :"<<dret<<"\n";

	Arithmetic <int>iobj1(10,11);
	int ret1 = iobj1.Substraction();
	cout<<"Addition is : "<<ret1<<"\n";

	Arithmetic <double>dobj1(10.9,11.5);
	double dret1 = dobj1.Substraction();
	cout<<"Addition is :"<<dret1<<"\n";

	return 0;
}




















/*
#include<iostream>
using namespace std;

class Arithmetic
{
	public:
		int No1,No2;

		Arithmetic(int a,int b)
		{
			No1 = a;
			No2 = b;
		}

		int Addition()
		{
			int Ans = 0;
			Ans = No1 + No2;
			return Ans;
		}
};

int main()
{
	Arithmetic obj(10,11);
	int ret = obj.Addition();
	
	cout<<"Addition is : "<<ret<<"\n";

	return 0;
}

*/


















/*
#include<iostream>
using namespace std;

template <class T>
T Addition(T No1,T No2)
{
	T Ans = No1 + No2;
	return Ans;
}
int main()
{
	int x = 10,y = 11,ret = 0;
	ret = Addition(x,y);
	cout<<"Addition is : "<<ret<<"\n";

	float a = 10.8,b = 11.5,fret = 0.0;
	fret = Addition(a,b);
	cout<<"Additon is : "<<fret<<"\n";

	double d1 = 10.8, d2 = 19.5, dret = 0.0;
	dret = Addition(d1,d2);
	cout<<"Addition is :"<<dret<<"\n";

	return 0;
}

*/


















/*
#include<iostream>
using namespace std;

int main()
{
	enum Marvellous_Batches{PPA = 0, LB = 1, Python = 2};
	const int Fees[] = {15000,16000,17000};
	const float Duration[] = {3.5,4.0,4.5};
	int choice = 0;

	cout<<"Select the batch that you want to join\n";
	cout<<"0 : PPA\n";
	cout<<"1 : Logic Buliding\n";
	cout<<"2 : Python\n";

		cout<<"Select the batch that you want to join\n";
	cin>>choice; 

	switch(choice)
	{
		case PPA:
			cout<<"Thank you for selecting Pre-Placement activity batch\n";
			cout<<"Duration is : "<<Duration[PPA]<<"\n";
			cout<<"Fees is : "<<Fees[PPA]<<"\n";
			break;

		case LB:
			cout<<"Thank you for selecting Logic Buliding batch\n";
			cout<<"Duration is : "<<Duration[LB]<<"\n";
			cout<<"Fees is : "<<Fees[LB]<<"\n";
			break;

		case Python:
			cout<<"Thank you for selecting Python batch\n";
			cout<<"Duration is : "<<Duration[Python]<<"\n";
			cout<<"Fees is : "<<Fees[Python]<<"\n";
			break;

			default:
			cout<<"Sorry there is no such batch\n";
			cout<<"Contact number : 7410559022";
			cout<<"Thank you for visiting Marvellous Infosystem"<<"\n";
	}




	return 0;
}

*/
















/*

#include<iostream>
using namespace std; 

int main()
{
	int Input = 0;
			//	0	1	2	3	4	5	6	
	enum Days {Sun,Mon,Tue,Wed,Thus,Fri,Sat};
	enum Days obj;
	obj = Tue;

	cout<<obj<<"\n";
	cout<<sizeof(obj)<<"\n";

	enum Gender {Female = 1, Male = 2};

	cout<<"Enter number\n";
	cin>>Input;

	switch(Input)
	{
		case Female:
			cout<<"Tax free limit is 3,00,000";
			break;

		case Male:
			cout<<"Tax free limit is 2,50,000";
			break;
	}	


	return 0;
}

*/












/*
 
#include<iostream>
using namespace std; 

int main()
{			//	0	1	2	3	4	5	6	
	enum Days {Sun,Mon,Tue,Wed,Thus,Fri,Sat};

	enum Days obj;

	obj = Tue;

	cout<<obj<<"\n";

	return 0;
}


*/

















/*
 
#include<iostream>
namespace 
{
	void fun()
	{
		std::cout<<"Inside fun\n";
	}
}

int main()
{
	std::cout<<"Jay Ganesh\n";

	fun();

	return 0;
}

*/

















/*
 
#include<iostream>
namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inside fun\n";
	}
};
namespace Infosystem
{
	void fun()
	{
		std::cout<<"Inside fun\n";
	}
};
int main()
{
	std::cout<<"Jay Ganesh\n";

	using namespace Marvellous;
	using namespace Infosystem;

	// fun();
	Infosystem::fun();

	return 0;
}

*/





















/*

// Union bank of maharastra , credit card dipartment,  
// 13-19 pement salary,  insentive - 5-8 extra credit,   time 10-6
// search - credit card, frature, use

#include<iostream>
using namespace std;

class Demo 
{
	public:
	int x;
	int y;
	
	Demo(int i=10,int j=20)
	{
		x=i;
		y=j;
	}	
};

Demo operator +(Demo op1,Demo op2)						//solution
{
	cout<<"Inside + operator\n";
	return Demo(op1.x + op2.x, op1.y + op2.y);
}

int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	Demo robj(0,0);
	
	robj = obj1 + obj2;			//robj = +(obj1,obj2);			//topic   //eroor ,solution			 
	cout<<robj.x<<"\n";			//62
	cout<<robj.y<<"\n";			//122
	
	return 0;
}

*/
















/*
// Oprator overloading

#include<iostream>
using namespace std;

class Demo
{
	public:
		int X;
		int Y;

	Demo(int i = 10, int j = 20)
	{
		X = i;
		Y = j;
	}
};
Demo oprator + (Demo op2,Demo op2)
{
	cout<<"Inside + oprator"<<"\n";
	return Demo(op1.X + op2.X, op1.Y, op2.Y);
}

int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	Demo robj(0,0);

	robj = obj1 + obj2;
	cout<<robj.X<<"\n";
	cout<<robj.Y<<"\n";

	return 0;
}

*/




















/*

#include<iostream>
using namespace std;

class Demo
{
public:
	inline int Add(int no1, int no2)
	{
		int iAns = 0;
		iAns = no1 + no2;
		return iAns;
	}
};

int main()
{
	Demo obj;
	int iRet = 0;

	iRet = obj.Add(10,11);
	cout<<iRet<<"\n";

	cout<<sizeof(Demo)<<"\n";
	return 0;
}


*/













/*

#include<iostream>
using namespace std;

int main()
{
	struct Demo
	{
		int no1;
		int no2;
	};
	
	
	typedef struct Demo DEMO;
	typedef struct Demo* PDEMO;
	typedef struct Demo** PPDEMO;
	
//  	typedef struct Demo
//   {
//		int no1;
//		int no2;
//	 }DEMO,*PDEMO,**PPDEMO;			//COMPANY madhy vaperteat    short coding
  		
	
	//struct Demo obj;
	DEMO obj;
	
	//struct Demo *p = &obj;
	PDEMO p = &obj;
	
	//struct Demo **q = &p;
	PPDEMO q = &p;
	
	return 0;
}




				//typedef Existing_Data_type    New_Name
				//typedef int NUMBER;
				//typedef char LETTER;
				//typedef float DECIMAL;
				//typedef int *IPTR;
				//typedef char **PPCHAR;
				//typedef const int *const CIPTRC;
				

*/









/*

// typedef (structure)

#include<iostream>
using namespace std;

int main()
{	
	struct Demo
	{
		int no1;
		int no2;
	};

	typedef struct Demo DEMO;
	typedef struct Demo* PDEMO;
	typedef struct Demo** PPDEMO;

	// typedef struct Demo
	// {
	// 	int no1;
	// 	int no2;
	// }Demo,*PDemo,**PPDemo;

	// struct Demo obj;
	DEMO obj;

	// struct Demo *P = &obj;
	PDEMO p = &obj;

	// struct Demo **PP = &P;
	PPDEMO q = &p;

	return 0;
}


*/












/*
// typedef in c and c++

#include<iostream>
using namespace std;

#define MAX 10

int main()
{	
	typedef int Number;
	typedef char LATTER;

	Number no = 11;
	LATTER ch = 'M';

	cout<<sizeof(no)<<"\n";
	cout<<no<<"\n";

	cout<<sizeof(ch)<<"\n";
	cout<<ch<<"\n";

	typedef const int *CPTR;

	CPTR P = &no;

	P = &no;

	cout<<*P<<"\n";

	return 0;
}

*/
















/*

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;

		Demo():j(20)
		{
			i = 10;
			// j = 20;
		}

		Demo(int a,int b):j(b)
		{
			i = a;
		}
		void fun()
		{
			cout<<"Inside fun\n";
			i++;
			// j++;
		}
		void gun(int a, const int b)const
		{
			int x = 10;
			const int y = 20;
			cout<<"Inside gun\n";
			// i++;
			// j++;
			x++;
			// y++;
			a++;
			// b++;
		}
};

int main()
{
	Demo dobj1(11,21);
	const Demo dobj2(11,21);

	dobj1.fun();
	dobj1.gun(10,20);

	// dobj2.fun();
	dobj2.gun(10,20);

	
	return 0;
}


*/










/*

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;

		Demo():j(20)
		{
			i = 10;
			// j = 20;
		}

		Demo(int a,int b):i(a),j(b)
		{
			cout<<"Inside parameterised\n";
		}
};

int main()
{
	Demo dobj(11,21);

	cout<<dobj.i<<"\n";
	cout<<dobj.j<<"\n";

	dobj.i++;
	// dobj.j++;

	cout<<dobj.i<<"\n";
	return 0;
}

*/
















/*

// const characteeristics

#include<iostream>
using namespace std;

class Demo
{
public:
	const int i = 10;
	int j = 20;

public:
	Demo()
	{
		j++;
	}
public:
	const void fun()
	{

	}
public:
	void sun()
	{
		
	}
};

int main()
{
	Demo dobj;
	cout<<dobj.i<<"\n";
	cout<<dobj.j<<"\n";

	return 0;
}
*/


















/*
// friend function

#include<iostream>
using namespace std;

class Hello
{
	public:
		void fun();
		void gun();
};
class Demo
{
	public:
		int i;
	protected:
		int j;
	private:
		int k;

	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		// friend void Hello::fun();
		// friend void Hello::gun();

		friend class Hello;

};

void Hello::fun()
{
	Demo obj1;
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
}
void Hello::gun()
{
	Demo obj1;
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
}

int main()
{
	Hello hobj;
	hobj.fun();
	hobj.gun();

	return 0;
}

*/


















/*
// friend function

#include<iostream>
using namespace std;

class Hello
{
	public:
		void fun();

	public:
		int i;
	protected:
		int j;
	private:
		int k;

	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		friend void Hello::fun();
};

void Hello::fun()
{
	Demo obj;
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	cout<<obj.k<<"\n";
}

int main()
{
	Hello hobj;
	hobj.fun();

	return 0;
}

*/













/*
// friend function

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
	protected:
		int j;
	private:
		int k;

	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		friend void fun();
};

void fun()
{
	Demo obj;
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	cout<<obj.k<<"\n";
}

int main()
{
	fun();

	return 0;
}

*/














/*

#include<iostream>
using namespace std;

class Base
{
	public: 
		int x,y;

		 void fun()
		 {
		 	cout<<"Base fun\n";
		 }
		 virtual void gun()			// concrete
		 {
		 	cout<<"Base gun";
		 }
		 virtual void sun()
		 {
		 	cout<<"Base sun";
		 }
		 virtual void run()=0;	// abstract function 
};
class Derived : public Base
{
	public:
		int i,j;
		void fun()
		{
			cout<<"Derived fun\n";
		}
		virtual void gun()
		{
			cout<<"Derived gun\n";
		}
		void run()
		{
			cout<<"Derived run\n";
		}
};
int main()
{
	// Base bobj;

	Derived dobj;
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";
	return 0;
}

*/















/*
// Static Behaviours

#include<iostream>
using namespace std;

class Base
{	
public:
	int i,j;
	static int x;

	Base(int a = 10, int b = 20)
	{
		cout<<"Inside Parametersized constructor\n";
		this->i = a;
		this->j = b;
	}
	void fun(int no)
	{
		cout<<"Inside non-statuc fun\n";
		cout<<this->i<<"\n";
		cout<<this->j<<"\n";
		cout<<Base::x<<"\n";
	}
	static void gun(int Value)
	{
		cout<<"Inside static gun\n";
		// cout<<this->i<<"\n";
	}
};
int Base::x = 30;

int main()
{
	cout<<Base::x<<"\n";

	Base::gun(11);
	Base obj(11);

	obj.fun(11);

	obj.fun(21);
	cout<<sizeof(obj)<<"\n";

	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";

	obj.gun(11);

	return 0;
}

*/


















/*
// Static characteristrics

#include<iostream>
using namespace std;

class Base
{	
public:
	int i,j;
	static int x;

	Base()
	{
		cout<<"Inside Defualt constructor\n";
		i = 10;
		j = 20;
	}
};
int Base::x = 30;

int main()
{
	cout<<Base::x<<"\n";
	cout<<sizeof(Base)<<"\n";

	Base obj1;
	Base obj2;

	cout<<sizeof(obj1)<<"\n";
	cout<<sizeof(obj2)<<"\n";

	cout<<obj1.i<<"\n";
	cout<<obj2.j<<"\n";

	return 0;
}

*/


















/*	
// Multiple inheritance

#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		Base()
		{
			cout<<"Inside Base constructor\n";
		}
		~Base()
		{
			cout<<"Inside Base Distructor\n";
		}
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};
class Derived 
{
	public:
		int i,j;
		Derived()
		{
			cout<<"Inside Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Inside Derived Distructor\n";
		}
		void gun()
		{
			cout<<"Inside Derived gun\n";
		}
};
class DerivedX : public Base, Derived
{
	public:
		int i,j;
		Derivedx()
		{
			cout<<"Inside Derivedx constructor\n";
		}
		~DerivedX()
		{
			cout<<"Inside Derivedx Distructor\n";
		}
		void sun()
		{
			cout<<"Inside DerivedX sun\n";
		}
};
int main()
{
	DerivedX dobj;
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";

	dobj.fun();
	// dobj.gun();
	dobj.sun();

	return 0;
}

*/

























/*

// Multilevel inheritance

#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		Base()
		{
			cout<<"Inside Base constructor\n";
		}
		~Base()
		{
			cout<<"Inside Base Distructor\n";
		}
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};
class Derived : public Base
{
	public:
		int i,j;
		Derived()
		{
			cout<<"Inside Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Inside Derived Distructor\n";
		}
		void gun()
		{
			cout<<"Inside Derived gun\n";
		}
};
class DerivedX : public Derived
{
	public:
		int i,j;
		Derivedx()
		{
			cout<<"Inside Derivedx constructor\n";
		}
		~DerivedX()
		{
			cout<<"Inside Derivedx Distructor\n";
		}
		void sun()
		{
			cout<<"Inside DerivedX sun\n";
		}
};
int main()
{
	DerivedX dobj;
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";

	dobj.fun();
	dobj.gun();
	dobj.sun();

	return 0;
}
*/
















/*
// Protected Access  specifier

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;

	private:
		int j;

	private:
		int k;
};
class Hello: public Demo
{
	public:
		int x;

	private:
		int y;


	private:
		int z;

	public:
		void fun()
		{
			// cout<<k<<"\n";
			cout<<dobj.j<<"\n";
		}
};
int main()
{
	cout<<sizeof(Demo)<<"\n";
	cout<<sizeof(Hello)<<"\n";

	Demo dobj;
	cout<<dobj.i<<"\n";
	
	// cout<<dobj.k<<"\n";

	Hello hobj;
	cout<<hobj.x<<"\n";
	// cout<<hobj.y<<"\n";
	// cout<<hobj.z<<"\n";

	cout<<hobj.i<<"\n";
	// cout<<hobj.j<<"\n";
	// cout<<hobj.k<<"\n";

	// hobj.fun();

	return 0;
}
*/























/*
// Singlelevel inheritance

#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		Base()
		{
			cout<<"Inside base constructor\n";
		}
		~Base()
		{
			cout<<"Inside Base Distructor\n";
		}
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};
class Derived : public Base
{
	public:
		int i,j;
		Derived()
		{
			cout<<"Inside Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Inside Derived Distructor\n";
		}
		void gun()
		{
			cout<<"Inside Derived gun\n";
		}
};
int main()
{
	Derived dobj;
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";

	dobj.fun();
	dobj.gun();

	return 0;
}
*/















/*
// Access  specifier

#include<iostream>
using namespace std;

class Demo
{
	int i;
	public:
		int X;

	private:
		int Y;

	public:
		Demo()
		{
			X = 10;
			Y = 20;
			i = 30;
		}
		void fun()
		{
			cout<<"Inside public fun\n";
			cout<<Y;
			gun();
		}
	private:
		void gun()
		{
			cout<<"Inside private gun\n";
			cout<<Y;
		}
};
int main()
{
	Demo obj;

	cout<<obj.X<<"\n";
	// cout<<obj.Y<<"\n";
	// cout<<obj.i<<"\n";

	return 0;
}
*/









 












/*
// this * pointer

#include<iostream>
using namespace std;

class Demo
{
	public:
		int X;
		int Y;

		Demo(int a = 10, int b = 20)
		{
			X = a;
			Y = b;
		}
		void fun(int iNo)
		{
			cout<<"Inside fun\n";
		}
};
int main()
{
	Demo obj(11,21);
	obj.fun(51);
	// fun(&obj,51);
	// fun(100,51);

	return 0;
}

*/















/*
// Parametrized constructor with default argument

#include<iostream>
using namespace std;

class Demo
{
	public:
		int X;
		int Y;

		Demo(int a = 10, int b = 20)
		{
			X = a;
			Y = b;
		}
};
int main()
{
	Demo obj1;
	Demo obj2(11);
	Demo obj3(11,21);

	return 0;
}

*/

















/*
// Function overloading 

#include<iostream>
using namespace std;

class Demo
{
public:
	int Addition(int iNo1, int iNo2)
	{
		int Ans = 0;
		Ans = iNo1 + iNo2;
		return Ans;
	}
	int Addition(int iNo1, int iNo2, int iNo3)
	{
		int Ans = 0;
		Ans = iNo1 + iNo2 + iNo3;
		return Ans;
	}
	int Addition(int iNo1, int iNo2, int iNo3, int iNo4)
	{
		int Ans = 0;
		Ans = iNo1 + iNo2 + iNo3 + iNo4;
		return Ans;
	}
};

int main()
{
	Demo obj;
	int iRet = 0;

	iRet = obj.Addition(10,20);
	cout<<"Addition is : "<<iRet<<"\n";

	iRet = obj.Addition(10,20,30);
	cout<<"Addition is : "<<iRet<<"\n";

	iRet = obj.Addition(10,20,30,40);
	cout<<"Addition is : "<<iRet<<"\n";

	return 0;
}
*/




















/*
//Defualt Argument

#include<iostream>
using namespace std;

float Area(float fRedius, float PI=3.14)
{
	float fAns = 0.0;
	fAns = PI * fRedius * fRedius;
	return fAns;
}

int main()
{
	float fRet = 0.0;

	fRet = Area(10.4,7.2);
	cout<<fRet<<"\n";

	fRet = Area(10.6);
	cout<<fRet<<"\n";

	return 0;
}

*/
















/*
// Function calling 

#include<iostream>
using namespace std;

void CallValue(int No)
{
	No++;
}
void CallAddress(int *P)
{
	(*P)++;
}
void CallReference(int &ref)
{
	ref++;
}

int main()
{
	int a = 10, b = 10, c = 10;

	CallValue(a);
	cout<<a<<"\n";

	CallAddress(&b);
	cout<<b<<"\n";

	CallReference(c);
	cout<<c<<"\n";

	return 0;
}
*/





















/*
//Dynamic memory allocation 

#include<iostream>
using namespace std;

int main()
{
	int Arr[5];

	int *P = NULL;

	P = new int[5];

	if(P == NULL)
	{
		cout<<"Unable to allocate memory\n";
	}
	else
	{
		cout<<"Memory gets alocated succesfully at address : "<<P<<"\n";
	}

	delete[]P;

	return 0;
}
*/




















/*

#include<iostream>
using namespace std;

class Arithematic
{
	public:
		int iNo1;
		int iNo2;

		Arithematic()
		{
			cout<<"Inside Defualt constructor\n";
			iNo1 = 10;
			iNo2 = 20;
		}
		Arithematic(int A, int B)
		{
			cout<<"Inside Parametersized constructor\n";
			iNo1 = A;
			iNo2 = B;
		}
		Arithematic(Arithematic &ref)
		{
			cout<<"Inside copy constructor\n";
			iNo1 = ref.iNo1;
			cout<<iNo1<<"\n";
			iNo2 = ref.iNo2;
			cout<<iNo2<<"\n";
		}
};

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	cout<<"Enter the first number\n";
	cin>>iValue1;

	cout<<"Enter the secound number\n";
	cin>>iValue2;

	Arithematic obj1();
	Arithematic obj2(iValue1,iValue2);
	Arithematic obj3(obj2);



	return 0;
}
*/























/*
#include<iostream>
using namespace std;

class Arithematic
{
	public:
		int iNo1;
		int iNo2;

		Arithematic()
		{
			cout<<"Inside Defualt constructor\n";
			iNo1 = 0;
			iNo2 = 0;
		}
		Arithematic(int A, int B)
		{
			cout<<"Inside Parametersized constructor\n";
			iNo1 = A;
			iNo2 = B;
		}
		~Arithematic()
		{
			cout<<"Inside Distructor\n";
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
			iAns = iNo1 - iNo2;
			return iAns;
		}
};

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	cout<<"Enter the first number\n";
	cin>>iValue1;

	cout<<"Enter the secound number\n";
	cin>>iValue2;

	Arithematic obj1;

	Arithematic obj2(iValue1,iValue1);

	iRet = obj2.Addition();
	cout<<"Addition is : "<<iRet<<"\n";

	iRet = obj2.Substraction();
	cout<<"Substraction is : "<<iRet<<"\n";

	return 0;
}
*/





















/*
#include<iostream>
using namespace std;

void Display(int iNo1)
{
	int iCnt = 0;

	for(iCnt =0; iCnt <= iNo1; iCnt++)
	{
		cout<<"*"<<"\n";
	}
}
int main()
{
	int iValue1 = 0;

	cout<<"enter first number\n";
	cin>>iValue1;

	Display(iValue1);

	return 0;
}
*/






















/*
#include<iostream>
using namespace std;

void Display(int iNo1)
{
	if(iNo1 % 5 == 0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}

int main()
{
	int iValue1 = 0;

	cout<<"enter first number\n";
	cin>>iValue1;

	Display(iValue1);

	return 0;
}
*/























/*
#include<iostream>
#include<stdbool.h>
using namespace std;

void Display()
{
	int i = 0;
	int j = 5;

	for(i=0; i = j; i++)
	{
		cout<<j<<"\n";
		j--;
	}
}

int main()
{

	Display();

	return 0;
}

*/





















/*
#include<iostream>
using namespace std;

void Display(int iNo1)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt <= iNo1; iCnt++)
	{
		cout<<"Marvellous"<<"\n";
	}
}

int main()
{
	int iValue1 = 0;

	cout<<"enter first number\n";
	cin>>iValue1;

	Display(iValue1);

	return 0;
}


*/





















/*
#include<iostream>
using namespace std;

int Display(int iNo1, int iNo2)
{
	int iAns = 0;

	if(iNo1 < iNo2)
	{
		return -1;
	}

	iAns = iNo1 / iNo2;
	return iAns;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iret = 0;

	cout<<"enter first number\n";
	cin>>iValue1;

	cout<<"Enter secound number\n";
	cin>>iValue2;

	iret = Display(iValue1,iValue2); 
	cout<<"Result is : "<<iret; 

	return 0;
}

*/














/*
#include<iostream>
using namespace std;

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		cout<<iDigit<<"\n";
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;

	cout<<"Enter number"<<"\n";
	cin>>iValue;

	DisplayDigit(iValue);

	return 0;
}
*/







//A186740 vaishali.
//F065367 Usha.







/*
#include<iostream>
using namespace std;

int Display(int iNo1)
{
	int icnt = 0;
	int iSum = 0;

	if(iNo1 < 0)
	{
		iNo1 =  -iNo1;
	}

	for(icnt = 1; icnt <= (iNo1/2); icnt++)
	{
		if((iNo1 % icnt)== 0)
		{
			cout<<icnt<<"\n";
			iSum = iSum + icnt;
		}
	}
	return iSum;
}
int main()
{
	int iValue1 = 0;
	int iRet = 0;

	cout<<"Enter the number\n";
	cin>>iValue1;

	iRet = Display(iValue1);
	cout<<"Result is : "<<iRet;

	return 0;
}
*/         








/*
#include<iostream>
using namespace std;

void Display(int iNo1)
{
	int icnt = 0;

	if(iNo1 < 0)
	{
		iNo1 =  -iNo1;
	}

	for(icnt = 1; icnt <= iNo1; icnt++)
	{
		if((iNo1 % icnt)== 0)
		{
			cout<<icnt<<"\n";
		}
	}
}
int main()
{
	int iValue1 = 0;

	cout<<"Enter the number\n";
	cin>>iValue1;

	Display(iValue1);

	return 0;
}
*/


















/*
#include<stdio.h>

void JweleryPortal(int iWeight)
{
	switch(iWeight)
	{
		case 1:
		cout<<"Your bill amount is : 4000\n";
		break;

		case 2:
		cout<<"Your bill amount is : 8000\n";
		break;

		case 5:
		cout<<"Your bill amount is : 20000\n";
		break;

		case 10:
		cout<<"Your bill amount is : 40000\n";
		break;

		default:
		cout<<"Invaild Weight\n";
		break;
	}
}

int main()
{
	int iValue = 0;
	
	cout<<"Enter the gold coin size that you want to purchase\n";
	cin<<iValue;

	JweleryPortal(iValue);

	return 0;
}

*/









/*

#include<iostream>
using namespace std;

void DisplayClass(float fMark)
{
	if((fMark > 0.0)&&(fMark < 35.0))
	{
		cout<<"You are Fail\n";
	}
	else if((fMark >= 35.0)&&(fMark < 50.0))
	{
		cout<<"Pass Class\n";
	}
	else if((fMark >= 50.0)&&(fMark < 60.0))
	{
		cout<<"Secound Class\n";
	}
	else if((fMark >= 60.0)&&(fMark < 70.0))
	{
		cout<<"First Class\n";
	}
	else if((fMark >= 70.0)&&(fMark < 100.0))
	{
		cout<<"First Class with distiction\n";
	}
	else
	{
		cout<<"Invalid Marks\n";
	}
}

int main()
{
	float fValue = 0.0;

	cout<<"enter the percentage\n";
	cin>>fValue;

	DisplayClass(fValue);
	
	return 0;
}
*/














/*
#include<iostream>
#include<stdbool.h>
using namespace std;

bool Chk( int No)
{
	if((No % 2 == 0)&&(No % 5 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int No = 0;
	bool bRet;

	cout<<"Enter the number\n";
	cin>>No;

	bRet = Chk(No);
	if(bRet == true)
	{
		cout<<"is divisible by 3 & 5\n";
	}
	else
	{
		cout<<"is not divisible by 3 & 5\n";
	}
	return 0;
}
*/











/*
#include<iostream>
#include<stdbool.h>
using namespace std;

bool Chk( int No)
{
	if(No % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int No = 0;
	bool bRet;

	cout<<"Enter the number\n";
	cin>>No;

	bRet = Chk(No);
	if(bRet == true)
	{
		cout<<("Even number\n");
	}
	else
	{
		cout<<("Odd number\n");
	}
	return 0;
}
*/

















/*
#include<iostream>
using namespace std;

void Chk( int No)
{
	if(No % 2 == 0)
	{
		printf("Even number\n");
	}
	else
	{
		printf("Odd number\n");
	}
}

int main()
{
	int No = 0;

	cout<<"Enter the number\n";
	cin>>No;

	Chk(No);

	return 0;
}

*/













/*
#include<iostream>
using namespace std;

int Display(int iNo1)
{
	int i = 1;
	int iSum = 0;

	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}

	for(i = 1; i <= iNo1; i++)
	{
		iSum = iSum + i;
	}
	return iSum;
}

int main()
{
	int iValue1 = 0;
	int iRet = 0;

	cout<<"Enter the number \n";
	cin>>iValue1;

	iRet = Display(iValue1);
	cout<<iRet;

	return 0;
}

*/








/*
#include<iostream>
using namespace std;

void Display(int iNo1)
{
	int icnt = 1;

	// for(i = 1; i <= iNo1; i++)
	// {
	// 	printf("%d\n",i);
	// }

	while(icnt <= iNo1)
	{
		printf("%d\n",icnt);
		icnt++;
	}
}

int main()
{
	int iValue1 = 0;

	cout<<"Enter the number\n";
	cin>>iValue1;

	Display(iValue1);

	return 0;
}
*/











/*
#include<iostream>
using namespace std;
// #include"practice.cpp"

int Addition(int No1, int No2)
{
	int Ans = 0;
	Ans = No1 + No2;
	return Ans;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	cout<<"Enter the first value\n";
	cin>>iValue1;

	cout<<"Enter the secound value\n";
	cin>>iValue2;

	iRet = Addition(iValue1,iValue2);
	cout<<"result is :"<<iRet;

	return 0;
}
*/