#include<iostream>
using namespace std;

class Meteor{
	private:
		string day[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
		int sum1=0;
		int sum2=0;
		int sum3=0;
	public:
		int date(int y,int m,int d){
			int j,i,n;
			int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
			if(y==1900){
			for(i=0;i<m;i++){
				sum1 += a[i];
			}	
			sum1=sum1+d; 
			}
			if(y>1900){
				for(i=1900;i<y;i++)
				{
					if(i%4==0 && i%100!=0|| i%400==0){
						 n=366;
					}else{
						n=365;
					}
					sum2=sum2+n;
				}
				if(y%4==0 && y%100!=0|| y%400==0){
				a[2]=29;
				}else{
					a[2]=28;
				}
				for(j=0;j<m;j++){
					sum3=sum3+a[j];
				}
			sum1 =sum2+sum3+d;
			}
			int w;
			w = sum1 % 7;
			cout<<day[w-1]<<endl;
			}
	
}; 

int main()
{
	char b[11];
	cin>>b;
	int a[11];
	for(int p=0;p<10;p++){
		a[p]=b[p]-'0';
	}
	int y,m,d;
	y=a[0]*1000+a[1]*100+a[2]*10+a[3];
	m=a[5]*10+a[6];
	d=a[8]*10+a[9]; 
	Meteor count;
	count.date(y,m,d);
	return 0;
}

