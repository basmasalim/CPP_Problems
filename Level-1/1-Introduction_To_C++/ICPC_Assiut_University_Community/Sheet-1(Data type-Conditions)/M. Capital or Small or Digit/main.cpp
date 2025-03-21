#include <iostream>

using namespace std;

int main()
{
    char x;
    cin >> x;
    if ( (int)x > 64 && (int)x < 91 ){
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else if ((int)x > 96 && (int)x < 123 ){
        cout << "ALPHA" << endl << "IS SMALL";
    } else if ((int)x > 47 && (int)x < 58 ){
        cout << "IS DIGIT";
    }else{
        cout << "You Should enter ALPHA or DIGIT";
    }
    return 0;
}


/*
int x = 65 ====> cout << (char)x =====>  'A'
char x = 'A' ====>

*/
