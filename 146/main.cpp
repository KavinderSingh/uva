#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    while(true)
    {
       // string s;
        char s[51];
        //for(int i=0; i<5)
        cin >> s;
        if(s[0] == '#')break;
        char s1[51],s2[51];
        for(int i=0;i<51;i++)
        {
            s1[i] = 0;
            s2[i] = 0;
        }
        for(int i = 0; i < strlen(s); i++) // s1 = s
        {
            s1[i] = s[i];
        }
        sort(s1, s1+strlen(s1)); // sort(s1.begin(), s1.end())
        int c = 0;

        do {

           if(c == 1) // matlab neeche s1 == s hua hoga
            { 
                cout << s1 << endl;
                c++;
                break;
            }

            

            for(int i = 0; i < strlen(s1); i++)    // s2 = s1
            {
                s2[i] = s1[i];
            }

            if(next_permutation(s2,s2+strlen(s2)) == false)
            {
                cout << "No Successor" << endl;
                break;
            }

            int flag = 0;

            for(int i=0;i<strlen(s1);i++)                      // if(s1==s)c++;
            {
                
                if(s1[i] != s[i])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0) // s1 == s
            {
                c++;
            }
            
    } while(next_permutation(s1, s1+strlen(s1))); // generating next permutation of sorted string s1
    }

return 0;
}