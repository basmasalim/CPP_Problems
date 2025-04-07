#include <iostream>

using namespace std;

int main()
{
    long long x,y, summation = 0;
    cin >> x >> y;
/*
    for(long long i = x; i <= y; i++){
            summation += i;
    }
    */

    long long count = y - x + 1;
    summation = count * (x + y) / 2;

    cout << summation;

    return 0;
}
