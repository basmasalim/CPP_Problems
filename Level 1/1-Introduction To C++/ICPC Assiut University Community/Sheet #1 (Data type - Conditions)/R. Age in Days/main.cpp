#include <iostream>

using namespace std;

int main()
{
    int i, years, months, days;
    cin >> i;

    years = i / 365;
    months = (i % 365)/30;
    days = (i % 365) % 30;


    cout << years << " years" << "\n" << months << " months" << "\n" << days << " days";
    return 0;
}
