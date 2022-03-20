//N=P1^y1*P2^y2*P3^y3*.......Pn^yn
//Total Divisors=(y1+1)*(y2+1)*...(yn+1)
//Ex:N=300
//N=2^2*3^1*5^2
//Total Divisors=(2+1)*(1+1)*(2+1)=3*2*3=18
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