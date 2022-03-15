//We will find answer here in BigO of sqrt(n) time 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool checkPrime(ll n)
{
    if(n==1)
    {
        return false;
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ll num;cin>>num;
    if(checkPrime(num))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}