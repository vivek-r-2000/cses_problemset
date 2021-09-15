#include<bits/stdc++.h>
#define ll long long int
#define lp(i,start,end,step) for(ll i=start;i<end;i+=step)
using namespace std;

int main()
{
    ll n,arr[1000005],ans;
    cin>>n;
    ans = n*(n+1)/2;
    lp(i,0,n-1,1)
        cin>>arr[i];
    lp(i,0,n-1,1)
        ans -= arr[i];
    cout<<ans<<endl;
    return 0;
}