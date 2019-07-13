#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        
        for(int i=0;i< s.length()/2; i+=2)
        {
            cout << s[i];
        }
        cout << endl;

    }

    return 0;
}
