#include<iostream>
using namespace std;
class Change{
	public:
		int Time(int t){
			int utc;
			if(t>=800&&t<=2359){
				utc=t-800;
			}
			if(t<800){
				utc=2400-(800-t);
			}
			cout<<utc;
		}
};
int main()
{
	int t;
	cin>>t;
	Change sc;
	sc.Time(t);
	return 0;
}
