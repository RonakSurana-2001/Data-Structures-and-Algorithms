//m must be prime
//a^(b^c) %M 
// res1=(b^c)%(M-1)
// (a^res1)%M

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll findPower(ll a,ll n,ll m)
{
    ll res=1;
    while(n>0)
    {
        if(n%2!=0)
        {
            res=res*a%m;
            n--;
        }
        else{
          a=a*a%m;
          n=n>>1;
        }
    }
    return res;
}

int main() 
{
  ll a,b,c;cin>>a>>b>>c;
  ll m=1e9+7;
  ll power1=findPower(b,c,m-1);
  ll power2=findPower(a,power1,m);
  cout<<power2<<endl;
}
