#include<iostream>
using namespace std;

class Demo 
{
 public:			//private
	int x;
	int y;
	
	Demo(int i=10,int j=20)
	{
		x=i;
		y=j;
	}	
};
	
 Demo operator ++(Demo &op)			//pre						
 {													
   //cout<<"Inside first\n";
	op.x++;
	op.y++;
	return op;
 }
 
 Demo operator ++(Demo &op,int)	//post	//dummy aregument aahe   //dummy aregumemt compulsary int hach pahije.
 {
	//cout<<"Inside secound\n";
	op.x++;
	op.y++;
	return Demo(op.x-1,op.y-1);								//anonimus object.
 }
 
	int main()
{
	Demo obj1(10,20);
	Demo obj2(10,20);
	
	Demo robj1(0,0);
	Demo robj2(0,0);
	
	robj1 = ++obj1;					//without dummy			//++obj1 he single aslyamule he unery oprator aahe
	cout<<obj1.x<<" "<<obj1.y<<"\n";			//11 21
	cout<<robj1.x<<" "<<robj1.y<<"\n";		//11 21
	
	robj2 = obj2++;				//with dummy						//++obj2 he single aslyamule he unery oprator aahe
	cout<<obj2.x<<" "<<obj2.y<<"\n";			//11 21
	cout<<robj2.x<<" "<<robj2.y<<"\n";		//10 20
	
	return 0;
}

