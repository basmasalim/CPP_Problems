#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char s;
    cin >> x >> s >> y;

    switch(s){
        case '>':
            if( x > y ) cout << "Right";
            else cout << "Wrong";
            break;
        case '<':
            if( x < y ) cout << "Right";
            else cout << "Wrong";
            break;
        case '=':
            if( x == y ) cout << "Right";
            else cout << "Wrong";
            break;
        default :
            cout << "Wrong";
    }

    return 0;
}

