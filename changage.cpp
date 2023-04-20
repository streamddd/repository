#include<iostream>
using namespace std;
class CHANGE{
	public:
		int age(int t){
			if(t>=1&&t<=10)
			{
			cout<<"Children";}
			if(t>=11&&t<=20)
			{
			cout<<"Teenagers";}
			if(t>=21&&t<=40)
			{
			cout<<"Youth";}
			if(t>=41&&t<=50)
			{
			cout<<"middle-aged";}
			if(t>=51&&t<=80)
			{
				cout<<"Elderly";
			}
			if(t>=81&&t<=100)
			{
				cout<<"Old man";
			}
		}
}; 
int main()
{
	int t;
	cin>>t;
	CHANGE a;
	a.age(t);
	return 0; 
} 
