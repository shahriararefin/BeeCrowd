#include<bits/stdc++.h>
using namespace std;

int main(){

    int X;
    float Y;

    cin >> X >> Y;

    float milage = X/ Y;

    cout <<fixed << setprecision(3) <<milage<< " km/l" <<endl ;

    return 0;
}