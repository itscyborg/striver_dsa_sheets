#include <bits/stdc++.h>

using namespace std;

void pat(int n)
{
    int i, j, k, l;
    for (i = 0; i < n; i++)
    {
        // space
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "*";
        }
        // space
        for (l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    pat(n);
}