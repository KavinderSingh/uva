#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    
    while(n--)
    {

        long s,d,x,y;

        cin >> s >> d;

        if(d>s || (s+d)%2 !=0)
        {
            cout << "impossible"<<endl;
            continue;
        }

        x = (s+d)/2;
        y = (s-d)/2;
        cout << x << " "<< y << endl;
    }
    return 0;
}