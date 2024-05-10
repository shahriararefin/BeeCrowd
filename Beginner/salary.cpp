#include <bits/stdc++.h>

using namespace std;

int main()
{

    int employeeNumber;
    cin >> employeeNumber;

    int workingHourPerMonth;
    cin >> workingHourPerMonth;

    float amountPerhour;
    cin >> amountPerhour;

    float Salary = workingHourPerMonth * amountPerhour;

    cout <<"NUMBER = " << employeeNumber << endl<< "SALARY = U$ " << fixed << setprecision(2) << Salary << endl;

    return 0;
}