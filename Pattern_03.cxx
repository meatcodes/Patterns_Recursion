/*
n=8
       *
      **
     ***
    ****
   *****
  ******
 *******
********
*/
#include<bits/stdc++.h>
using namespace std;

void pattern(int spa, int col, int row, int n)
{
    if(n==row) return;
    else 
    {
        if(spa<(n-row-1))
        {
            cout<<" ";
            pattern(spa+1, col, row, n);
        }
        else if(col<=row)
        {
            cout<<"*";
            pattern(spa, col+1, row, n);
        }
        else 
        {
            cout<<"\n";
            pattern(0, 0, row+1, n);
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

        pattern(0, 0, 0, n);
    }

    return 0;
}
