#include <bits/stdc++.h>
using namespace std;
#define P 1000000007
typedef long long int ll;
ll F[1000001];
ll power(ll a, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            res = (res * a) % P;
            n--;
        }
        else
        {
            a = (a * a) % P;
            n /= 2;
        }
    }
    return res;
}
ll C(ll n, ll k)
{
    if (k > n)
    {
        return 0;
    }
    ll res = F[n];
    res = (res * power(F[k], P - 2)) % P;
    res = (res * power(F[n - k], P - 2)) % P;
    return res;
}
int main()
{
    F[0] = F[1] = 1;

    for (ll i = 2; i <= 1000000; i++)
    {
        F[i] = (F[i - 1] * i) % P;
    }
    ll q;
    cin >> q;
    ll n, k;
    while (q--)
    {
        cin >> n >> k;
        cout << C(n, k) << endl;
    }
}