#include <iostream>

using namespace std;

int main()
{
    char x;
    cin >> x ;

    if(64 < (int)x && (int)x < 91){
        cout << (char)(x + 32) << endl;
    }else{
        cout << (char)(x - 32) << endl;
    }
    return 0;
}
