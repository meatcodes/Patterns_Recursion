/*
n=4
****
 ***
  **
   *
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n, int row, int col, int spa)
{
    if(n==row) return;

    if(spa<row)
    {
        cout<<" ";
        print(n, row, col, spa+1);
    }
    else if(col<n-row)
    {
        cout<<"*";
        print(n, row, col+1, spa+1);
    }
    else 
    {
        cout<<"\n";
        print(n, row+1, 0, 0);
    }
}

int main()
{
    int n;
    cin>>n;

    print(n,0,0,0);

    return 0;
}
