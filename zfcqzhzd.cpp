#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
    int n,i,j=0,t,sum,p=0,m=26;
    int count[26] = {0}; 
    char str[1000]; 
    cin>>str;
    n=strlen(str);
    for (i = 0; i < n; i++)
	{
        count[str[i] - 'a']++;
    }

    for (i = 0; i <25; i++) 
	{
        for(j=0;j<25-i;j++)
        {
        	if(count[j]<count[j+1])
        	{
        		t=count[j];
        		count[j]=count[j+1];
        		count[j+1]=t;
			}
        	
		}
    }
    for(j=0;j<=26;j++)
    {
    	sum=count[j]*m;
    	p=sum+p;
        m--;
	}
	cout<<p;
    return 0;
}

