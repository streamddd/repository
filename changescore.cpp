#include<iostream>
using namespace std;
class CHANGE{
	public:
		int score(int t){
			if(t>=90)
			{
			cout<<"A";}
			if(t>=80&&t<90)
			{
			cout<<"B";}
			if(t>=70&&t<80)
			{
			cout<<"C";}
			if(t>=60&&t<70)
			{
			cout<<"D";}
			if(t<=60)
			{
				cout<<"E";
			}
		}
}; 
int main()
{
	int t;
	cin>>t;
	CHANGE a;
	a.score(t);
	return 0; 
} 
