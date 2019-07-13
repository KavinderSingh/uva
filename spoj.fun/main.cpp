#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int a[n];
    int i;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int q[m];
    int c[m];
    int x = 0;
    for(i=0;i<m;i++)
    {
        cin >> q[i];
    }
    
    for(i=0;i<n;i++)
    {
        int flag = 0;

        for(int j=0; j<m; j++)
        {
            if(q[j] == a[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            c[x++] = a[i];
        }
    }

    sort(c, c+x);
    for(i=0;i<x;i++)
    {
        cout << c[i]<< " ";
    }
    

    return 0;
}