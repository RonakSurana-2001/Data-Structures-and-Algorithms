#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;cin>>t;
    ll a,b;
    while(t--)
    {
        cin>>a>>b;
        ll d=b-a;

        ll res=0;
        ll f=1;

        for(int i=0;i<32;i++)
        {
            if(d>(f<<i))
            {
                continue;
            }
            else{
                if((a&(f<<i))&&(b&(f<<i)))
                {
                    res+=f<<i;
                }
            }
        }
        cout<<res<<endl;
    }
}