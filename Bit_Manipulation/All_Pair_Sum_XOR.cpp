#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    int xxor=2*ar[1];
    for(int i=2;i<=n;i++)
    {
        xxor=xxor^(2*ar[i]);
    }
    cout<<xxor<<endl;
}