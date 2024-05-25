#include<bits/stdc++.h>

using namespace std;

int main(){

    float x1, x2, y1, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    float x = x2-x1;
    float y= y2 - y1;

    float Distance = 0.5*(pow(x,2)+ pow(y,2));

    cout << fixed << setprecision(4) << Distance << endl;

    return 0;
}