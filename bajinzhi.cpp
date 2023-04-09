#include<iostream>
using namespace std;
int main()
{
	int n,m=0,a[10],i=0,k=0;
	cin>>n;
	while(n/8!=0)
	{
		m=n%8;
		n/=8;
		a[i]=m;
		i++;
		//k++;
	}
	//a[k]=n;
	for(int i=k;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}
