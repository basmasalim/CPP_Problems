#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for(int i = 1; i <= x ; i++){
       for(int j = 1; j <= i; j++){
            if( i % j == 0){
                if( i * j > x && i / j < x){
                    cout << i << " " << j;
                    return 0;
                }
            }
       }
    }


    return 0;
}
