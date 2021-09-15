#include<bits/stdc++.h>
#define ll long long int
#define lp(i,start,end,step) for(ll i=start;i<end;i+=step)
using namespace std;

int main()
{
    ll t,y,x;
    cin>>t;
    while(t--)
    {
        cin>>y>>x;
        if(y>x)
        {
            if(y%2 == 0)
                cout<< y*y - x + 1 <<endl;
            else
                cout<< (y-1)*(y-1) + x <<endl;
        }
        else
        {
            if(x%2 == 1)
                cout<< x*x - y + 1<<endl;
            else
                cout<< (x-1)*(x-1) + y <<endl;
        }
    }
    return 0;
}