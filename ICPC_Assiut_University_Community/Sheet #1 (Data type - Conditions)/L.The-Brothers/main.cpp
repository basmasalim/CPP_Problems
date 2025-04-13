#include <iostream>

using namespace std;

int main()
{
    string f1,f2, s1, s2, result;
    cin >> f1 >> s1;
    cin >> f2 >> s2;
    result = (s1 == s2) ? "ARE Brothers" : "NOT";
    cout << result;
    return 0;
}
