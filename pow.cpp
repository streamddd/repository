#include<iostream> 
using namespace std;
class MATH{
	public:
		int power(int x,int n)
		{
			int pro=1;
			for(int i=0;i<n;i++)
			{
				pro=x*pro;
			}
			cout<<pro;
		}
};
int main()
{
	int x,n;
	cin>>x>>n;
	MATH p;
	p.power(x,n);
	return 0;
}
