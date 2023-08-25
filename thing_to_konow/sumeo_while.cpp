#include <iostream>
using namespace std;

void sum(int n)
{
    int s_e = 0, s_o = 0;
    
    string num = to_string(n);
    for (int i = 0; i < num.size(); i++)
    {
        if (i % 2 == 0) 
        {
            s_e += num[i] - '0'; 
        }
        else
        {
            s_o += num[i] - '0'; 
        }
    }
    cout << "Sum odd = " << s_o << "\n";
    cout << "Sum even = " << s_e << "\n";
}

int main(){
    int n;
    cin >> n;
    sum(n);
    return 0;
}
