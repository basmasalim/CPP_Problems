#include <iostream>

using namespace std;

int main()
{
    double n, k, a;
    cin >> n >> k >> a;

    long long myNum = (n * k )/ a;
    double res = (n * k )/ a, myRes = res - myNum  ;

    if(myRes > 0){
        cout << "double";
    }else if(res > 2147483647){
        cout << "long long";
    }else{
        cout << "int";
    }

    return 0;
}
