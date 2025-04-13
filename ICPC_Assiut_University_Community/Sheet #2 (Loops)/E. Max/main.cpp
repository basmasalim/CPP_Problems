#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, num, maxNum = INT_MIN;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
    }

    cout << maxNum;
    return 0;
}
