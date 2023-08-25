#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int a = 1, b = 1, c, i;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else
    {
        for (i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
