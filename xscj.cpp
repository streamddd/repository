#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

class Solution {
private:
    int i,j;
public:
    void sort(float a[],int n) {
        for(i=0; i<n; i++) {
            for(j=0; j<n-i; j++) {
                if(a[j]<a[j+1]) {
                    float t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
    }
};
int main() {
Solution grade;
int p;
cin >> p;
float zongfen[100];
string stu[100][4];
for(int i=0;i<p;i++){
for(int j=0;j<3;j++){
cin >> stu[i][j];
}
zongfen[i]=stod(stu[i][1])*0.4+stod(stu[i][2])*0.6;
stu[i][3]=to_string(zongfen[i]);
}
grade.sort(zongfen,p);
for(int i=0;i<p;i++){
for(int j=0;j<p;j++){
if(stu[j][3]==to_string(zongfen[i])){

cout << stu[j][0]<<" ";
cout<<setiosflags(ios::fixed)<<setprecision(2)<<stod(stu[j][1])<<" ";
cout<<setiosflags(ios::fixed)<<setprecision ( 2 )<<stod(stu[j][2])<<" ";
cout<< setiosflags ( ios::fixed )<< setprecision ( 2 )<<stod(stu[j][3])<<endl;}
}
}
}

