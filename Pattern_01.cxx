/*
n=4
****
****
****
****
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int row, int col)
{
    if(row==n) return;
    else 
    {
        if(col<n)
        {
            cout<<"*";
            pattern(n, row, col+1);
        }
        else
        {
            cout<<"\n";
            pattern(n, row+1, 0);
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

        pattern(n, 0, 0);
    }

    return 0;
}
