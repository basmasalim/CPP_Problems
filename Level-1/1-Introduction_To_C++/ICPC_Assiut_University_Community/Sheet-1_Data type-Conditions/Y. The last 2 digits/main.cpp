#include <iostream>

using namespace std;

int main()
{
    long long x,y,z,w, Multiply;
    cin >> x >> y >> z >> w;
    x %= 100; // x = x % 100
    y %= 100;
    z %= 100;
    w %= 100;

    Multiply = (x * y * z * w) % 100;

    if(Multiply < 10){
        cout << 0 << Multiply;
    }else{
        cout << Multiply;
    }

    return 0;
}

// 434500145 147276606 217842775 236387740
