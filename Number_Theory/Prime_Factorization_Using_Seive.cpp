#include<bits/stdc++.h>
using namespace std;
int ar[1000001];
void seive(int x)
{
    int maxN=1000000;
    for(int i=1;i<=maxN;i++)
    {
        ar[i]=-1;
    }
    for(int i=2;i<=maxN;i++)
    {
        if(ar[i]==-1)
        {
            for(int j=i;j<=maxN;j+=i)
            {
                if(ar[j]==-1)
                {
                    ar[j]=i;
                }
            }
        }
    }
    while(x>1)
    {
        cout<<ar[x]<<" ";
        x/=ar[x];
    }
}
int main()
{
    int n;cin>>n;
    seive(n);
}