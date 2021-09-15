#include<bits/stdc++.h>
#define ll long long int
#define lp(start,end) for(ll i=start;i<end;i++)
#define lp2(j,start,end,step) for(ll j=start;j<end;j+=step)

using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    lp(1,n+1)
        if(i%2 == 0)
            cout<<i<<" ";
    lp(1,n+1)
        if(i%2 == 1)
            cout<<i<<" ";
    return 0;
}