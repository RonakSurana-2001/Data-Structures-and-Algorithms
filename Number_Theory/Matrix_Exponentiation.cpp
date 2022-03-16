#include <bits/stdc++.h>
using namespace std;
#define N 101
int ar[N][N], I[N][N];

void mul(int A[][N], int B[][N], int dim)
{
    int res[dim + 1][dim + 1];
    for (int i = 1; i <= dim; i++)
    {
        for (int j = 1; j <= dim; j++)
        {
            res[i][j] = 0;
            for (int k = 1; k <= dim; k++)
            {
                int x = A[i][k] * B[k][j];
                res[i][j] += x;
            }
        }
    }
    for (int i = 1; i <= dim; i++)
    {
        for (int j = 1; j <= dim; j++)
        {
            A[i][j] = res[i][j];
        }
    }
}
void power(int A[][N], int dim, int n)
{
    for (int i = 1; i <= dim; i++)
    {
        for (int j = 1; j <= dim; j++)
        {
            if (i == j)
            {
                I[i][j] = 1;
            }
            else
            {
                I[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        mul(I, A, dim);
    }
    for (int i = 1; i <= dim; i++)
    {
        for (int j = 1; j <= dim; j++)
        {
            A[i][j] = I[i][j];
        }
    }
}
void print(int ar[][N], int dim)
{
    for (int i = 1; i <= dim; i++)
    {
        for (int j = 1; j <= dim; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dim, n;
        cin >> dim >> n;
        for (int i = 1; i <= dim; i++)
        {
            for (int j = 1; j <= dim; j++)
            {
                cin >> ar[i][j];
            }
        }
        power(ar, dim, n);
        print(ar, dim);
    }
}