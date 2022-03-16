#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000007
ll ar[3];
ll I[2][2],T[2][2];
void mul(ll A[2][2],ll B[2][2],ll dim)
{
    ll res[dim+1][dim+1];
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            res[i][j]=0;
            for(int k=1;k<=dim;k++)
            {
                ll x=(A[i][k]*B[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}
ll getFib(ll n)
{
    if(n<=2)
    {
        return ar[n];
    }
    I[1][1]=I[2][2]=1;
    I[1][2]=I[2][1]=0;

    T[1][1]=0;
    T[1][2]=T[2][1]=T[2][2]=1;

    n=n-1;
    while(n)
    {
        if(n%2)
        {
            mul(I,T,2);n--;
        }
        else{
            mul(T,T,2);
            n/=2;
        }
    }
    ll x=(ar[1]*I[1][1]+ar[2]*I[2][1])%mod;
    return x;
}
int main()
{
    ll t,n;cin>>t;
    while (t--)
    {
        cin>>ar[1]>>ar[2]>>n;n++;
        cout<<getFib(n)<<endl;
    }
}