#include<bits/stdc++.h>
using namespace std;

int main(){

    double p1, p1Unit, p1Price;
    double p2, p2Unit, p2Price;

    cin >> p1 >> p1Unit >> p1Price;
    cin >> p2 >> p2Unit >> p2Price;

    double amount = (p1Unit*p1Price)+(p2Unit*p2Price);

    cout << "VALOR A PAGAR: R$ "<<fixed << setprecision(2)<< amount << endl;

    return 0;
}