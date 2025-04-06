#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x ,p, r;
    cin >> x >> p;

    r = (p * 100) / (100 - x); // In case of discount (100% - %x)

    cout << fixed << setprecision(2) << r;
    return 0;
}

/*
x%
p = price
*/
