/*
   n=4
   *
  * *
 * * *
* * * *
*/


#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int row, int col, int spa)
{
     if(n==row) return;

     if(spa<n-row-1)
     {
          cout<<" ";
          pattern(n, row, col, spa+1);
     }
     else if(col<2*row+1)
     {
          if(col%2==0) cout<<"*";
          else cout<<" ";
          pattern(n, row, col+1, spa);
     }
     else 
     {
          cout<<"\n";
          pattern(n, row+1, 0, 0);
     }
}

int main()
{
     int n;
     cin>>n;

     pattern(n, 0, 0, 0);

     return 0;
}
