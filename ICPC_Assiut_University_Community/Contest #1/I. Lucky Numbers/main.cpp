#include <iostream>

using namespace std;

int main()
{
    int num, x, y;
    cin >> num;

    x = num / 10;  // Tens place
    y = num % 10;  // Ones place

    // First check if 'y' is zero to avoid division by zero
    if ((y % x == 0 && x != 0 )|| (x % y == 0 && y != 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
