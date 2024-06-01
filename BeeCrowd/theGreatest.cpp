#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    int max_ab = (a + b + abs(a - b)) / 2;

    int greatest = (max_ab > c) ? max_ab : c;

    
    cout << greatest << " eh o maior" << endl;

    return 0;
}