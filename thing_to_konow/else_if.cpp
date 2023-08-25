#include <bits/stdc++.h>
using namespace std;

string compareIfElse(int a, int b)
{
    // Write your code here
    if (a > b)
    {
        return "greater";
    }
    else if (a == b)
    {
        return "equal";
    }
    else
    {
        return "smaller";
    };
};

int main()
{
    int x, y;
    cin >> x >> y;
    string result = compareIfElse(x, y);
    cout << result << endl;
    return 0;
}