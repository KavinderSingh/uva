#include <iostream>
#include <stack>
#include <queue>
using namespace std;

bool check_permu(int ip[], int op[], int n) 
{ 
    // Input queue 
    queue<int> input; 
    for (int i=0;i<n;i++) 
        input.push(ip[i]); 
  
    // output queue 
    queue<int> output; 
    for (int i=0;i<n;i++) 
        output.push(op[i]); 
  
    // stack to be used for permutation 
    stack <int> tempStack; 
    while (!input.empty()) 
    { 
        int ele = input.front(); 
        input.pop(); 
        if (ele == output.front()) 
        { 
            output.pop(); 
            while (!tempStack.empty()) 
            { 
                if (tempStack.top() == output.front()) 
                { 
                    tempStack.pop(); 
                    output.pop(); 
                } 
                else
                    break; 
            } 
        } 
        else
            tempStack.push(ele); 
    } 
  
    // If after processing, both input queue and 
    // stack are empty then the input queue is 
    // permutable otherwise not. 
    return (input.empty()&&tempStack.empty()); 
} 
int main()
{

    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;

        int input[n];

        for(int i = 0; i< n; i++)
        {
            input[i] = i+1;
        }

        while(true)
        {
            stack<int> station;
            int output[n];
            int o = 0;
            int a;
            cin >> a;
            if(a==0)break;
            output[0] = a;
            for(int i=1;i<n;i++)
            {
                cin >> a;
                output[i] = a;
            }

            if(check_permu(input, output, n)) cout << "Yes" << endl;
            else cout << "No" << endl;
           

        }
        cout << endl;


    }

    return 0;
}