#include<bits/stdc++.h>
#define ll long long int
#define lp(start,end,step) for(ll i=start;i<end;i+=step)
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(1)
    {
        cout<<n<<" ";
        if(n == 1)
            break;
        if(n%2 == 0)
            n /= 2;
        else
            n = n*3 + 1;
    }
    cout<<endl;
    return 0;
}