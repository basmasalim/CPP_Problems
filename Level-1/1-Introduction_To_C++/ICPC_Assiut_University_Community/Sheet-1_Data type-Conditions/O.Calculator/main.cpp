#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char s;
    cin >> a>> s>> b;

    switch(s)
    {
    case '+':
        cout << a + b ;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default :
        printf("Exiting\n");

    }

    return 0;
}
