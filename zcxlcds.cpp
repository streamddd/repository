#include <iostream>
using namespace std;
int main() 
{
    int n, a[20] = {0}, b[20] = {0}, k = 0;
    /*scanf("%d", &n);*/cin>>n;
    for (int i = 1; i <= n; ++i) 
	{
        /*scanf("%d", &a[i]);*/cin>>a[i];
        ++b[a[i]];
        if (b[a[i]] == 2)
            k++;
    }
    if (k == 0)
       /* printf("none");*/cout<<"none";
    else 
	{
        for (int i = 1; i <= n; ++i)
            if (b[a[i]] == 2) 
			{
                /*printf("%d ", a[i]);*/cout<<a[i];
                b[a[i]] = 0;
            }
    }
    return 0;
}
