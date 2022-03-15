// We will check the number is prime or not in O(Nlog(logN)) time.
#include <bits/stdc++.h>
using namespace std;
int is_prime[1000000];
void seive(int num,int limit)
{
    int maxN = 1000000;
    for (int i = 1; i <= maxN; i++)
    {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (is_prime[i] == 1)
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    if (is_prime[num] == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    printf("Generate number of prime numbers upto a particular value\n");
    for(int i=0;i<=limit;i++)
    {
        if(is_prime[i]==1)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int num;
    cin >> num;
    int limit;cin>>limit;
    seive(num,limit);
}