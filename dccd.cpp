#include<iostream>
using namespace std;
class question{
	private:
		string a[10000];
		string b=".";
		int j=0;
	public:
		void init(){
			for(int i=0;i<10000;i++){
				cin>>a[i];
				this ->a[i]=a[i];
				j++;
				if(a[i].find(b)!=-1)
				break;
			}
		}
		void show(){
			for(int i=0;i<j;i++){
				if(i==j-1){
					cout<<(a[i].length())-1;
				}else
				cout<<a[i].length()<<" ";
			}
		}
		
}; 
int main(){
	question how;
	how.init();
	how.show();
}
