#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;ll ar[n];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        ll cnt=0;
        ll res=0;
        for(int i=1;i<=n;i++)
        {
            cnt=(i)*(n-i+1);
            if(cnt%2)
            {
                res^=ar[i];
            }
        }
        cout<<res<<endl;
    }
}