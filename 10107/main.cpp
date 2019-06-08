#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long n;
    vector<long> v;
    while(cin >> n)
    {
        v.push_back(n);

        if(v.size() == 1)
        {
            cout << n << endl;
            continue;
        }
        

        sort(v.begin(), v.end());
        
        if(v.size() % 2 == 0)
        {
            long index2 = (v.size())/2;
            long index1 = (v.size()-1)/2;
            cout << (v[index1] + v[index2])/2 << endl;
            continue;
        
        }

        int index = v.size()/2;
        cout << v[index] << endl;



    }


    return 0;
}