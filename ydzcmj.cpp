#include<iostream>
using namespace std;
class Circle{
	public:
		int D(int r)
		{   
			int x;
			x=2*r;
			cout<<"ֱ��="<<x<<endl;
			return 0;
		}
		float C(int r)
		{
			float y;
			y=6.28*r;
			cout<<"�ܳ�="<<y<<endl;
		}
		float S(int r)
		{
			float z;
			z=3.14*r*r;
			cout<<"���="<<z<<endl;
		}
};
int main()
{
	int r;
	cin>>r;
	Circle a;
	a.D(r);
	a.C(r);
	a.S(r);
	return 0;}
