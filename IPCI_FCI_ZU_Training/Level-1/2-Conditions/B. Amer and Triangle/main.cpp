#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if(pow(a,2) + pow(b,2) == pow(c, 2) || pow(a,2) + pow(c,2) == pow(b, 2) || pow(c,2) + pow(b,2) == pow(a, 2) ){
        cout<< "yes";
    }else{
        cout<< "no";
    }
    return 0;
}
