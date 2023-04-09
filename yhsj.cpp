#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[16][16] = { 0 };
	int a = 1;
	int b = 1;
	char c;
	cin>>n;	
    for (a = 0;  a < n; a++)
	{
	
		arr[a][0] = 1;
 
		for (b = 0; b <=a; b++)
		{
			if(a==b)
            {
			   arr[a][b] = 1;
            }
 
			if(a>1 && b>=1)        
            {
			arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
            }
 
           cout<<arr[a][b]<<c;
		}
		printf("\n");//»»ÐÐ 
	}
	return 0;
}
