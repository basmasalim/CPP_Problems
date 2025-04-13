#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag = false;
    cin >> n;


    for(int i = 2; i < n; i++){
        if(n % i == 0){
            flag = true;
            break;
        }
    }

    if(flag || n < 2){
        cout << "NO";
    }else{
        cout << "YES";
    }


    return 0;
}
