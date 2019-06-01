#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
     int t,i=0;
     cin >> t;
     while(t--)
     {
         int a[3];
         for(int i=0;i<3;i++)
         {
             cin >> a[i];
         }
         sort(a,a+3);
        ++i;
         cout <<"Case "<<i<< ": "<< a[1]<< endl;

     }
 }