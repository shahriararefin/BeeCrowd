#include<bits/stdc++.h>
using namespace std;

int main(){

    double pi= 3.14159;
    double R;
    cin >> R;

    double volume = (4.0/3)*pi*pow(R, 3);

    cout << "VOLUME = "<< fixed << setprecision(3) << volume << endl;
    return 0;
}