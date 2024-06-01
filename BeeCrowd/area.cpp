#include<bits/stdc++.h>
using namespace std;


int main(){

    double A, B, C, pi= 3.14159, R;

    cin >> A >> B >> C;

    double triangle = 0.5*A*C;
    double circle = pi*pow(C,2);
    double trapezium = (A+B)/2*C;
    double square = pow(B, 2);
    double rectangle = A*B;

    cout << "TRIANGULO: " <<fixed << setprecision(3) << triangle << endl;
    cout << "CIRCULO: " <<fixed << setprecision(3) << circle << endl;
    cout << "TRAPEZIO: " <<fixed << setprecision(3) << trapezium << endl;
    cout << "QUADRADO: " <<fixed << setprecision(3) << square << endl;
    cout << "RETANGULO: " <<fixed << setprecision(3) << rectangle << endl;

    return 0;
}