#include<string>
#include <iostream>
using namespace std;
class Change {
private:
    string s="",table="0123456789";
public:
    void Turn(int m, int n) {
        cin>>m>>n;
        if(m==0)
            cout<<m<<endl;
        while(m) {
            if(m<0) {
                m=-m;
                cout<<"-";
            }
            s=table[m%n]+s;
            m/=n;
        }
        cout<<s<<endl;
        s="";
    }
};
int main() {
    int t,i,m,n;
    Change DtoR;

    cin>>t;
    for(i=0; i<t; i++) {
        DtoR.Turn(m,n);
    }
    return 0;
}

