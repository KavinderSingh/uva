#include <iostream>
#include<stack>
using namespace std;

int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;

        while(true)
        {
            stack <int> s,s1;
            int a;
            cin >> a;
            if(a==0)break;

            for(int i=0;i<n;i++)
            {
                s.push(a); s1.push(a);
                if(i!=n-1)
                {
                    cin >> a;
                }
                
            }

           // if(a1==0)continue;
            stack <int> s2;
            int n2 = n;
            while(n2--)
            {
                s2.push(s.top());
                s.pop();
            }

            int flag =1;
            int t = s1.top() + s2.top();

            for(int i=0;i<n-1;i++)
            {  
                s1.pop();s2.pop();     
                if(s1.top() + s2.top() != t)
                {
                    flag = 0;
                    break;
                }

            }
            if(flag==0)cout << "No" << endl;
            else cout << "Yes" << endl;
            
            
        }
        
        

    }

    return 0;
}