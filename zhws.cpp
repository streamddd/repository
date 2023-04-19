#include<iostream>
using namespace std;
class HWS{
	private:
		int b=0,x=0;
	public:
		int Palinum(int m,int k){
			int c,n; 
	       for(int x=0;x<k;m++)
	   {
		c=m;
		n=m;
		while(n!=0)
		{	
			b=b*10+n%10;
			n/=10;
		}
		if(b==c)
		{
		x++;
		cout<<b<<endl;}
		b=0;
		
}}};
int main()
{
	int m,k,N;
	cin>>N;
	for(int i=0;i<N;i++){
	
	cin>>m>>k;
	HWS sc;
	sc.Palinum(m,k);}
	return 0;
}
