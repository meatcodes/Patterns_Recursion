/*
n=3
*
**
***
****
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row, int col, int n)
{
    if(n==row) return;
    else 
    {
        if(col<=row)
        {
            cout<<"*";
            pattern(row, col+1, n);
        }
        else 
        {
            cout<<"\n";
            pattern(row+1, 0, n);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        pattern(0, 0, n);
    }

    return 0;
}
