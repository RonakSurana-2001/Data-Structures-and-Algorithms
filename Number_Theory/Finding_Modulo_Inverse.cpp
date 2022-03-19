/* Two ways of finding modulo inverse
1.Using Fermet's Little Theorm
2.Using Extended Euclidean Algorithm
*/
/*
Conditions:
1.m must be a prime number
2.a^-1=a^(m-2)
*/
// We have used Fermet's Little Theorm Here:
#include<bits/stdc++.h>
using namespace std;
int power(int a,int n,int m)
{
    int res=1;
    while(n)
    {
        if(n%2)
        {
            res=(res*a)%m;
            n--;
        }
        else{
            a=(a*a)%m;
            n/=2;
        }
    }
    return res;
}
int main()
{
    int t,a,b,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>m;
        cout<<"a^-1"<<" = "<<power(a,m-2,m)<<endl;
    }
}