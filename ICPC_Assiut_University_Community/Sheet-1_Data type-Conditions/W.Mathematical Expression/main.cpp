#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C ;

    switch(S){
        case '+' :
            if(A + B == C){
                cout << "Yes";
            }else{
                cout << A + B;
            }
            break;
        case '-' :
            if(A - B == C){
                cout << "Yes";
            }else{
                cout << A - B;
            }
            break;
        case '*' :
            if(A * B == C){
                cout << "Yes";
            }else{
                cout << A * B;
            }
            break;
        default :
            cout << "Enter a right expression like A + B = C";
    }

    return 0;
}
