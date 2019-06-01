#include <iostream>
using namespace std;

int main()
{   
   
while(true)
{
    int t;
    cin >> t;
    if(t==0)break;
    int div_x, div_y;
        cin >> div_x >> div_y;
    while(t--){
    
        int x,y;
        cin >> x >> y;
        if(x > div_x && y > div_y) cout <<"NE"<<endl;
        else
        if(x == div_x || y == div_y) cout << "divisa"<<endl;
        else
        if(x> div_x && y < div_y)cout << "SE" <<endl;
        else
        if(x< div_x && y < div_y)cout << "SO" <<endl;
        else
        if(x< div_x && y > div_y)cout << "NO" <<endl;
    }
    
}
    
return 0;
}