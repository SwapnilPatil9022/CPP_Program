#include<iostream>
namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inside fun\n";
	}
};

int main()
{

	std::cout<<"jay ganesh\n";

	using namespace Marvellous;
	
	fun();
	
	return 0;
}