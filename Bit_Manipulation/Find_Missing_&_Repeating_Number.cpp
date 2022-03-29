#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            res = res ^ ar[i];
            res = res ^ i;
        }
        int setBit = res & ~(res - 1);

        int L = 0, R = 0;

        for (int i = 1; i <= n; i++)
        {
            if (ar[i] & setBit)
            {
                L = L ^ ar[i];
            }
            else
            {
                R = R ^ ar[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (i & setBit)
            {
                L = L ^ i;
            }
            else
            {
                R = R ^ i;
            }
        }
        bool isMissing = true;
        for (int i = 1; i <= ar[i]; i++)
        {
            if (ar[i] == L)
            {
                isMissing = false;
                break;
            }
        }
        if (isMissing == true)
        {
            cout << "Missing Number = " << L << " repeating number = " << R << endl;
        }
        else
        {
            cout << "Missing Number = " << R << " repeating number = " << L << endl;
        }
    }
}