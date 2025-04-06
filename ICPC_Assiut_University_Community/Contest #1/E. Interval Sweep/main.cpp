#include <iostream>

using namespace std;

int main()
{
    // a: The number of odd numbers in the interval.
    // b: The number of even numbers in the interval.
    short a,b;
    cin >> a >> b;

    if(a == b+1 || b == a+1 || (a == b && a + b > 0) ){
         cout << "YES";
    }else{
         cout << "NO";
    }

    return 0;
}
