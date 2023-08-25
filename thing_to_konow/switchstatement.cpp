#include <bits/stdc++.h>
using namespace std;

double areaSwitchCase(int ch, vector<double> a)
{
    // Write your code here

    switch (ch)
    {
    case 1:
    {
        int r;
        cout << "Enter radius of circle" << endl;
        cin >> r;
        a.push_back(r);

        double area_c = 3.14 * r * r;
        cout << area_c;
        break;
    }
    case 2:
    {
        int l, b;
        cout << "Enter length and bredth of rectangle : " << endl;
        cin >> l >> b;
        a.push_back(l);
        a.push_back(b);
        int area_r = l * b;
        cout << area_r << endl;
        break;
    }
    default:
    {
        cout << "invalid option";
        break;
    }
    }
    return 0;
}

int main()
{
    int choice;
    vector<double> measurements;
    cout << "enter choice " << endl;
    cin >> choice;
    areaSwitchCase(choice, measurements);

    return 0;
}