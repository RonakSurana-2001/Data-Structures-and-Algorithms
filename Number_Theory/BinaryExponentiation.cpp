#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll power(ll a,ll n)
{
    ll res=1;
    while(n!=0)
    {
        if(n%2!=0)
        {
            res=res*a;
            n--;
        }
        else{
            a=a*a;
            n/=2;
        }
    }
    return res;
}
int main()
{
    ll a,n;cin>>a>>n;
    ll result=power(a,n);
}