#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x,y,z, maxList, minList,mediator;
    cin >> x >> y >> z;

     maxList = max({x,y,z});
     minList = min({x,y,z});

    if((y >= x && y <= z) || (y >= z && y <=x)){
        mediator = y;
    }else if((x >= y && x <= z) || (x >= z && x <= y)){
        mediator = x;
    }else{
        mediator = z;
    }

    cout << minList << "\n" << mediator << "\n" << maxList << "\n\n";
    cout << x << "\n" << y << "\n" << z;
    return 0;
}
