#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[1001];
    int n,res=0;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<32;i++)
    {
        int cntZ=0,cnt0=0;

        for(int j=1;j<=n;j++)
        {
            if(ar[j]&(1<<i))
            {
                cnt0++;
            }
            else{
                cntZ++;
            }
        }
        int p=cnt0*cntZ;
        res+=(1<<i)*p;
    }
    cout<<res<<endl;
}