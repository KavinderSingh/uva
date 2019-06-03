#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        char chars[k];
        int val[k];
        int i;
        for(i=0;i<k;i++)
        {
            cin >> chars[i] >> val[i];
        }
        
        int m;
        cin >> m;
            char s2[10000]; 
            float cost = 0.0;
            cin.ignore();
        for(i=0;i<m;i++)
        {  
            
           cin.getline(s2,10000);
           for(int x = 0; x < strlen(s2); x++)
           {
           for(int j = 0; j < k; j++)
           {
              if(s2[x] == chars[j])
              {
                  cost = cost + val[j];
                  break;
              } 
            }

           }
        }
       
       

    printf("%0.2f$\n",cost/100);
        
    }

    return 0;
}