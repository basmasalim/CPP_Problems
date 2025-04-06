#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if((int(c) > 64 && int(c) < 91) || (int(c) > 96 && int(c) < 123)){
        cout << "Alphabet";
    }else{
        cout << "Not alphabet";
    }
    return 0;
}
