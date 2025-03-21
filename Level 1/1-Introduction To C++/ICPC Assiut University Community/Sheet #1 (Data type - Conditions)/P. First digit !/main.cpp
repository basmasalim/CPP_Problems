#include <iostream>

using namespace std;

int main()
{
    int x ;
    cin >> x;

    string  result = (x / 1000) % 2 == 0 ? "EVEN" : "ODD";

    cout << result;

}

/*
4564 ==> 4

*/
