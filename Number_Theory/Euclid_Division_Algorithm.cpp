#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        cout << a << endl;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;
}