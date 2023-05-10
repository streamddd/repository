#include <iostream>
#include <string.h>
using namespace std;
class zhi{
	public:
		zhi(){}
		void Zhao(char arr[],int x,char brr[],int y)
		{
		  a=x;
		  b=y;
		  if(strcmp(arr,brr)==0)
		      {
		          cout<<"1";
		      }
		       else if(a>b)
		      {
		         cout<<"-1";
		      }	
		  else
		  {
		  	if(strstr(brr,arr)==NULL)
		  	{
			  	cout<<"-1";
			  }
			  else
			  {
		  	for(int i=0;i<b;i++)
		  {	
		  		int k=i;
		  		int m=0;
			for(int j=0;j<a;j++)
			{
				if(brr[k]==arr[j])
				{
					k++;
					m++;
				}
				else{
					break;
				}
			}  
			if(m==a)
			{
			cout<<i<<" ";	
			}	
			}
			  }
		  }    
		}
	private:
		int a,b;
};
int main()
{
	char arr[100];
	gets(arr);
	char brr[100];
	gets(brr);
	int a=strlen(arr);
    int b=strlen(brr);
    zhi d;
    d.Zhao(arr,a,brr,b);
	return 0;
}
