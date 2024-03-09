/*
n=4
****
***
**
*
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n, int row, int col)
{
    if(row==n) return;

    if(col<n-row)
    {
        cout<<"*";
        print(n, row, col+1);
    }
    else 
    {
        cout<<"\n";
        print(n, row+1, 0);
    }
}

int main()
{
    int n;
    cin>>n;

    print(n,0,0);
     
    return 0;
}
