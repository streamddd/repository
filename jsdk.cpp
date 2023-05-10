#include<iostream>
using namespace std;
class STU{
	public:
	int iscancel(int a[],int N,int k)
	{int s=0;
	int i;
		for(int i=0;i<N;i++)
		{
			if(a[i]<=0)
			s++;
		}
		if(s<k)
		cout<<"yes";
		else
		cout<<"no";
	}
};
int main()
{
	int a[1000],N,k;
	cin>>N>>k;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	STU p;
	p.iscancel(a,N,k);
	return 0;
}                                            
