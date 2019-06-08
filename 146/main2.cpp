#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    while(true)
    {
        char s[50];
        cin >> s;
        if(s[0] == '#')break;
        bool val = next_permutation(s, s + strlen(s)); 
        if (val == false) 
        cout << "No Successor" << endl; 
        else
        cout << s<< endl;
    }

    return 0;
}