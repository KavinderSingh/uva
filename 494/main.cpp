#include <iostream>
using namespace std;

int counter(string s)
{
    int count = 0;
    int flag = 0;
    for(int i=0;i<s.length();i++)
    {
        if(i == 0)
        {
            if(s[i]>= 65 && s[i]<=90 || s[i]>=97 && s[i]<= 122)
            {
                count++;
                continue;
            }
        }

        if(!(s[i]>= 65 && s[i]<=90 || s[i]>=97 && s[i]<= 122))
        {
            flag = 1;
            continue;
        }

        if(s[i]>= 65 && s[i]<=90 || s[i]>=97 && s[i]<= 122)
        {
            if(flag == 1)
            {
                count++;
                flag = 0;
            }
        }
    }

    return count;
}

int main()
{
    string s;
    
    while(getline(cin, s))
    {
        cout << counter(s) << endl;
    }

    return 0;
}