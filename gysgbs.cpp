#include<iostream>
using namespace std;
class NUM{
	public:
		int divisor(int n,int m)
		{
			int t=0;
			while(t=m%n)
			{
				m=n;
				n=t; 
			}
			cout<<n<<endl;
		}
		int multipel(int n,int m)
		{
			int x=n*m;
			int r=m%n;
			while(r!=0)
			{
				m=n;
				n=r;
				r=m%n;
			}
			cout<<x/n;
		}
};
int main()
{
	int n,m;
	cin>>n>>m;
	NUM p;
	p.divisor(n,m);
	p.multipel(n,m);
	return 0;
	
}
