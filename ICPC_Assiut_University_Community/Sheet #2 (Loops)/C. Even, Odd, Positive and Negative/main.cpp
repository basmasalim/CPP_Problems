#include <iostream>

using namespace std;

int main()
{
    int n, nums, even = 0, odd = 0, neg = 0, pos = 0;
    cin >> n;

    for(int i = 0; i < n; i++ ){
        cin >> nums;

        if(nums % 2 == 0){
            even++;
        }else {
            odd++;
        }

        if(nums > 0){
            pos++;
        }

        if(nums < 0){
            neg++;
        }
    }

      cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << pos << endl << "Negative: " << neg;
    return 0;
}
