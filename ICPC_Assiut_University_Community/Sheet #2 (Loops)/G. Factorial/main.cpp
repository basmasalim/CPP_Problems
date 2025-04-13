#include <iostream>

using namespace std;

int main()
{
    int n, nums;
    cin >> n;

    while(n > 0){
        cin >> nums;

        long long f = 1;

        for(int i = 1; i <= nums; i++){
            f *= i;
        }

        cout << f << endl;

        n--;
    }

    return 0;
}


// 4 = 4 * 3 *2 * 1
//  cout << nums * i * (i - 1);
