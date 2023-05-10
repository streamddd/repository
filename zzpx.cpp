#include<iostream>
using namespace std;
class NUM{
	public:
		int sort(int num[],int n)
		{int t;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n-1-i;j++)
				{
					if(num[j]>num[j+1])
					{
						t=num[j];
						num[j]=num[j+1];
						num[j+1]=t;
					}
				}
			}
				for(int i=0;i<n;i++)
				cout<<num[i];
				cout<<""<<endl;
		}
};
int main()
{
	int num[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	NUM p;
	p.sort(num,n);
	return 0;
 } 
