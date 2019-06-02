#include <iostream>
using namespace std;

int main()
{
    while(true)
    {
        int months,deprec,i;
        float down,loan;
        scanf(" %d %f %f %d", &months, &down, &loan, &deprec);
        if(months<0)break;
        else
        {
            
        
        //while(months>0)
        
        
        float  dep[months+1];
        float owe;
        for(i=0;i<months + 1;i++)
        {
            dep[i] = -1;
        }
        for(i=0;i<deprec;i++)
        {
            int t;
            float d;
            cin >> t>>d;
            dep[t] = d;
        }

       float  val = down + loan;
       float d = dep[0];//current dep intiaaly dep[0];
            val = (1 -d)*val;
        owe = loan;
        int t = 0;
        float installment = loan/months;

        while ( owe > val)
        {
             t++;
            owe = owe - installment;
            // if dept[t] is not different then reduce the value by same amount
            if (dep[t] != -1) d = dep[t];
            val = (1 - d)*val;
            

        }
        if( t == 1)
        {
            cout << t << " month"<< endl;
        }
        else
        {
            cout << t << " months"<< endl;
        }
        

        }
    }
}