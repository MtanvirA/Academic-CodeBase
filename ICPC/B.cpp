#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int a , b ,c ,d ;
    cin>> a>>b>>c>>d;
    if(b<= d)
    {
        cout << "NO"<<"\n";
    }
    else{
        cout<<"YES\n";
    }
}

int main() {
    fastio;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}