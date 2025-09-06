#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 0;
    int t;
    cin >> t;
    string s;
    while (t)
    {
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            x++;
        }
        else
        {
            x--;
        }
        t--;
    }
    cout << x << endl;
    return 0;
}