/*
n=4
     *
    ***
   *****
  *******
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n, int col, int row, int spa)
{
    if(n==row) return;

    if(spa<(n-row-1))
    {
        cout<<" ";
        print(n, col, row, spa+1);
    } 
    else if(col<=2*row)
    {
        cout<<"*";
        print(n, col+1, row, spa);
    }
    else 
    {
        cout<<"\n";
        print(n, 0, row+1, 0);
    }
}

int main()
{
    int n;
    cin>>n;

    print(n, 0, 0, 0);

    return 0;
}
