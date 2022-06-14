#include<iostream>

using namespace std;

 int main()
{
	int Arr[5];
	
	int *p = NULL;
	
	p = new int[5];
	
	if(p==NULL)
	{
		cout<<"Unable to allocate the memory\n";
	}
	else
	{
		cout<<"Memory get succesfully allocated at address:" <<p<<"\n";
	}

	delete []p;
 
	return 0;
}