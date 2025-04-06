#include <iostream>

using namespace std;

int main()
{
    char x;
    int nextChar;

    cin >> x;

    if(x == 'z'){
        cout << 'a';
    }else{
         cout << (char)(x + 1);
    }

    return 0;
}
