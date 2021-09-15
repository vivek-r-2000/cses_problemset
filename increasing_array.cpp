#include<bits/stdc++.h>
#define ll long long int
#define lp(start,end,step) for(ll i=start;i<end;i+=step)
using namespace std;

int main()
{
    ll n,arr[1000005],count = 0;
    cin>>n;
    lp(0,n,1)
        cin>>arr[i];
    lp(1,n,1)
        if(arr[i-1] - arr[i] > 0)
        {
            count += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    cout<<count<<endl;
    return 0;
}