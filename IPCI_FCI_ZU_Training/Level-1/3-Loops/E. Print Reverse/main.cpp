#include <iostream>

using namespace std;

int main()
{
    int n, r, revN = 0;
    cin >> n;

    while(n > 0){
        r = n % 10;
        n = n /10;
        revN = (revN * 10) + r;
    }

    cout << revN;
    return 0;
}

/*
    n = 123
    r = 3
    revN = (0 * 10) + 3 = 3

    n = 12
    r = 2
    revN = (3 * 10) + 2 = 32

    n = 1
    r = 1
    revN = (32 * 10) + 1 = 321

    n = 0
*/

