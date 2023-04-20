#include<iostream>
using namespace std;
class SEASON{
	public:
		int number(int t){
			if(t==1)
			{
			cout<<"spring";}
			if(t==2)
			{
			cout<<"summer";}
			if(t==3)
			{
			cout<<"autum";}
			if(t=4)
			{
			cout<<"winter";}
		}
}; 
int main()
{
	int t;
	cin>>t;
	SEASON a;
	a.number(t);
	return 0; 
}
