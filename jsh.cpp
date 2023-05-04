#include<iostream>
using namespace std;
class SUM{
	private:
		int x;
	public:
	int even(int n)
	{
		
		if(n%2==0)
			return 1;
		else
		return 0;
	}
};
int main()
{
	int x;
	int n;
	int s=0; 
	while(cin>>n)
	{
		SUM p;
		p.even(n);
		if(p.even(n)==0)
		{
			s=s+n;
		}
		if(n==0||n<0)
		break;
	}
	cout<<s;
	return 0;
}
