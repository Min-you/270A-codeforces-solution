#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a; 
    cin >> a;
    //the robot can only move angle a thus to find the angle that the side of the polygon are join we take 180-a
    //we know that 360 mod (180 - a) will give us 0 thus the following solution
    cout << (360 % (180-a)== 0 ? "YES" : "NO") << endl;
}

int main(){ 
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
