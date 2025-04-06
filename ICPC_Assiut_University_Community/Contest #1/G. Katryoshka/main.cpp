#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, m, k, mn, res = 0;
    cin >> n >> m >> k;

    mn = min({n, m , k});
    res += mn;

    n -= mn;
    m -= mn;
    k -= mn;

    mn = min(n/2, k);
    res += mn;

    cout << res;


    return 0;
}
