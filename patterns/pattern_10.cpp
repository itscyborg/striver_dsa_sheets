#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i, j, k,l;

    for (i = 0; i < n; i++)
    {
        // space
        for (j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        // star
        for (k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }
        // space
        for (l = 0; l < n-i-1; l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
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
    cout << "Value of n: ";
    cin >> n;
    pattern(n);
    pat(n);
}