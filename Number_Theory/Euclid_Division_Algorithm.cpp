#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b)
{
    if(b==0)
    {
        cout<<a<<endl;
    }
    gcd(b,a%b);
}
int main()
{
    int num1,num2;cin>>num1>>num2;
    gcd(num1,num2);
}