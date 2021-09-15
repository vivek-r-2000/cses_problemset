#include<bits/stdc++.h>
#define ll long long int
#define lp(start,end) for(ll i=start;i<end;i++)
#define lp2(j,start,end,step) for(ll j=start;j<end;j+=step)

using namespace std;

int main()
{
    ll n;
    cin>>n;
    cout<<"0\n";
    lp(2,n+1)
        cout<<i*i*(i*i-1)/2 - (i-1)*(i-2)*4<<endl;
    return 0;
}