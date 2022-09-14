#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a; 
    cin >> a;
    cout << (360 % (180-a)== 0 ? "YES" : "NO") << endl;
}

int main(){ 
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}