#include <iostream>
#include <ctype.h>
using namespace std;



int main() 
{
    char str[100];
    int has_at = 0, at_pos = -1, dot_pos = -1;
    /*scanf("%s", str);*/cin>>str;
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (!isalnum(str[i]) && str[i] != '_' && str[i] != '-' &&str[i] != '@' && str[i] != '.') 
		{
           cout<<"no";
            return 0;
        }
        if (str[i] == '@') 
		{
            if (has_at || i == 0 || str[i+1] == '\0') 
			{
               cout<<"no";
                return 0;
            }
            has_at = 1;
            at_pos = i;
        }
        if (str[i] == '.') 
		{
            if (dot_pos != -1 || at_pos == -1 || i == at_pos + 1 || str[i+1] == '\0') 
			{
                cout<<"no";
                return 0;
            }
            dot_pos = i;
        }
    }
    if (has_at && dot_pos != -1 && dot_pos > at_pos + 1 && str[0] != '.' && str[at_pos+1] != '.' && str[dot_pos+1] != '.') 
	{
       cout<<"yes";
    } 
	else 
	{
       cout<<"no";
    }
    return 0;
}
