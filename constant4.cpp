#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;
		
		Demo():j(20)			//Member initialization   (member baher initialise karaycha)
		{ 
		 i=10;
		// j=20;
		}
		
		Demo(int a,int b):i(a),j(b)
		{
		 cout<<"Inside parameterised\n";
		}
};

int main()
{
 Demo obj(11,21);
 
 cout<<obj.i<<"\n"; 
 cout<<obj.j<<"\n"; 
 
 obj.i++;
 //obj.j++;		//Errpr   - karan vrti j constant aahe tyachi value vadhnar nahi.
				//constant aahe ka nahi bagnyasathi he ++ kel.
 cout<<obj.i<<"\n";
 
 return 0;
}