/*Here we have done prime factorization in O(sqrt(n)) time complexity*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void primeFact(int N)
{
    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0)
        {
            int cnt=0;
            while(N%i==0)
            {
                cnt++;N/=i;
            }
            cout<<i<<"^"<<cnt<<endl;
        }
    }
    if(N>1)
    {
        cout<<N<<"^"<<1<<endl;
    }
}
int main()
{
    ll n;cin>>n;
    primeFact(n);
}