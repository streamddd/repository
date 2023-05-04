#include<iostream>
using namespace std;
class NUM{
	private:
		int count=0;
	public:
		int fraction(int n,int m)
		{
			while(n!=0)
			{
				int t=n/m;
				int x=n%m;
				n=x*10;
				cout<<t;
				count++;
				if(count==200)
				break;
			}
		}
};
int main()
{
	int n,m;
	scanf("%d/%d",&n,&m);
	printf("0.");
	NUM p;
	p.fraction(n,m);
	
}
