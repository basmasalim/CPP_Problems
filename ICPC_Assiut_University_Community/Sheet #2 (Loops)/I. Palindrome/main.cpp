#include <iostream>

using namespace std;

int main()
{
    int n, r, d, reV = 0;
    cin >> n;

    d = n;

    while(n > 0){
        r = n % 10;
        n /= 10;
        reV = (reV * 10) + r;
    }


    if(d == reV){
        cout << reV << endl << "YES";
    }else {
        cout << reV << endl << "NO";
    }

    return 0;
}
