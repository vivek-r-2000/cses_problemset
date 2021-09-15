#include<bits/stdc++.h>
#define ll long long int
#define lp(i,start,end,step) for(ll i=start;i<end;i+=step)
using namespace std;

int main()
{
    ll l,max=0,count=1;
    char s[1000005],e = 'Z';
    cin>>s;
    l = strlen(s);
    lp(i,0,l,1)
    {
        if(e == s[i])
            count++;
        else
            count = 1;
        e = s[i];
        if(count>max)
            max = count;
    }
    cout<<max<<endl;
    return 0;
}