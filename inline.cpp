#include<iostream>
using namespace std;

class Demo
{
	public:
	 int Add(int no1,int no2)
	 {
		int ans = 0;
		ans = no1 + no2;
		return ans;
	}
};

int main()
{
	Demo obj;
	cout<<sizeof(obj)<<"\n";				//1      //ha lnline function topic aahe.
	
	int ret = 0;
	
	ret = obj.Add(10,11);					//21
	
	cout<<ret<<"\n";
	
	return 0;

}