#include<iostream>
#include<iomanip>
using namespace std;
class DATA{
	public:
		void ARR(float a,float b,float c,float d,float e,float f)
		{
			float sum1;
			float ave,var,sum2;
			sum1=a+b+c+d+e+f;
			ave=sum1/6;
			sum2=(a-ave)*(a-ave)+(b-ave)*(b-ave)+(c-ave)*(c-ave)+(d-ave)*(d-ave)+(e-ave)*(e-ave)+(f-ave)*(f-ave);
			var=sum2/6;
				cout<<fixed<<setprecision(2)<<ave<<endl;
		cout<<fixed<<setprecision(2)<<var;
		}
};
int main()
{
	float n,a,b,c,d,e,f;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c>>d>>e>>f;
		DATA sc;
		sc.ARR(a,b,c,d,e,f);
	}
	return 0;
}
