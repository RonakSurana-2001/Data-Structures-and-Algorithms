//Here we are finding Euler's Toilent Function in O(sqrt(n))
#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
    int res = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res /= i;
            res *= (i - 1);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        res /= n;
        res *= (n - 1);
    }
    return res;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << "ETF(" << n << ") = " << phi(n) << endl;
    }
}