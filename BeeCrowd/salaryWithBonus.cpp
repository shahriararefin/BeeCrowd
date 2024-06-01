#include<bits/stdc++.h>
using namespace std;

int main(){

    string name;
    double salary;
    double sales;

    cin >> name;
    cin>> salary >> sales;

    double total = salary+(sales*0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}