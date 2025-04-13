#include <iostream>

using namespace std;

int main()
{
    float n;
    cin >> n;
    if(int(n) == n){
        cout << "int " << int(n) << endl;

    }else{
        cout << "float " << int(n) << " " << n - int(n) << endl;
    }

    return 0;
}




/*
2.5
2   0.5

2.5 -2
5.5 -5




*/
