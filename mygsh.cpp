#include<iostream>
#include <string.h>
using namespace std;
class question{
	private:
		int k,length,length2;
		int j=0;
		int times=1;
		char s[10000]="0";
		char ss[10000];
		char a[10000];
		char b[10000];
	public:
		void input(){
			cin>>s;
			cin>>k;
			length=strlen(s);
			this->k=k;
			for(int i=0;i<length;i++){
				this->s[i]=s[i];
			}
			this->length=length;
		}
		void init(){
			for(int i=0;i<length;i++){
			if(s[i]!='-'){
				ss[j]=s[i];
				ss[j]=toupper(ss[j]);
				j++;
			}
		}
		length2=strlen(ss);
		j=0;
		for(int i=length2-1;i>=0;i--){
			a[j]=ss[i];
			j++;
		}
		int m=0;
		int len=strlen(a);
		for(int i=0;i<len;i++){
			if(i==k*times){
				b[m]='-';
				m++;
				times++;
				b[m]=a[i];
				m++;
			}else{
				b[m]=a[i];
				m++;
			}
		} 
		}
			
		void show(){
			for(int i=strlen(b)-1;i>=0;i--){
				cout<<b[i];
			}
		}
}; 
int main(){
	question how;
	how.input();
	how.init();
	how.show();
	return 0;
}
