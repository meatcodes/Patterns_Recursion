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
    else if(col<2*n-2*row-1)
    {
        if(col%2==0) cout<<"*";
        else cout<<" ";;
        print(n, row, col+1, spa);
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

    print(n, 0, 0, 0);

    return 0;
}

