#include <iostream>

using namespace std;

int main()
{
    int L1, L2, r1, r2;
    cin >> L1 >> r1 >> L2 >> r2;

    if((L2 <= r1 && r1 <= r2) || (L1 <= r2 && r2 <= r1 )){
        if(L1 > L2){
            if(r1 > r2){
                cout << L1 << " " << r2;
            }else{
                cout << L1 << " " << r1;
            }
        }else{
            if(r1 > r2){
                cout << L2 << " " << r2;
            }else{
                cout << L2 << " " << r1;
            }
        }
    }else{
        cout << "-1";
    }
    return 0;
}
