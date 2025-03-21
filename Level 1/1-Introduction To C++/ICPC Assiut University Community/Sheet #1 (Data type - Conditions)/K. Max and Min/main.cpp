#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int minVal = min({x, y, z});
    int maxVal = max({x, y, z});
    cout << minVal << " " << maxVal << endl;
    return 0;
}
