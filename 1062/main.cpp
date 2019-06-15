#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main()
{
    string s;
    int x =1;
    while(cin >> s)
    {
        if(s == "end")break;
        int c = 0;
        
       stack<char> st[26];
        for(int i=0;i<s.size();i++)
        {
            if(i==0)
            {
                
                st[0].push(s[0]);
                c++;
                continue;
            }
            for(int j=0;j<s.size();)
            {
                if(s[i]<=st[j].top())
                {
                    st[j].push(s[i]);
                    break;
                }
                else
                {
                    if(!st[++j].empty())
                    {
                        if(s[i] <= st[j].top())
                        {
                            st[j].push(s[i]);
                           
                        }
                        /* else
                        {
                            st[++j].push(s[i]);
                            c++;
                        } */
                        
                        
                    }
                    else
                    {
                        st[j].push(s[i]);
                        c++;
                    }
                    
                    
                }
                
            }
        }
        
        cout <<"Case "<< x++<< ": "<< c << endl;
    }

    return 0;
}