#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;cin>>t;
    while(t--)
    {
        cin>>n;
        int cnt=0;
        while(n>0)
        {
           /*if((n&1)>0)
            {
                cnt++;
            }
            n=n>>1;*/
            cnt++;
            n=n&(n-1);
        }
        cout<<cnt<<endl;
    }
}