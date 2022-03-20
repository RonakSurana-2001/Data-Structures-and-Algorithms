#include<bits/stdc++.h>
using namespace std;
int primeFact(int n)
{
    int res=1;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            res*=(cnt+1);
        }
    }
    return res;
}
int main()
{
    int num;cin>>num;
    int ans=primeFact(num);
    cout<<ans<<endl;
}