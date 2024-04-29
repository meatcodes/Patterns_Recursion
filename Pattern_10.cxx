/*
  n==5
  *
 ***
*****
 ***
  *
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n, int spa, int col, int row)
{
    if(n==row) return;

    if(row<=(n/2))
    {
        if(spa<(n/2)-row) 
        {
            cout<<" ";
            print(n, spa+1, col, row);
        }
        else if(col<=2*row) 
        {
            cout<<"*";
            print(n, spa, col+1, row);
        }
        else 
        {
            cout<<"\n";
            print(n, 0, 0, row+1);
        }
    }
    else 
    {
        if(spa<row-(n/2))
        {
            cout<<" ";
            print(n, spa+1, col, row);
        }
        else if(col<2*n-2*row-1)
        {
            cout<<"*";
            print(n, spa, col+1, row);
        }
        else 
        {
            cout<<"\n";
            print(n, 0, 0, row+1);
        }
    }
}


int main()
{
    int n;
    cin>>n;

    print(n, 0, 0, 0);

    return 0;
}

 
  
