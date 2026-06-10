#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
   vector<int>x(m);
   vector<int>y(m);
    vector<int>z(m);
    //debug(mp.size());
  

    for (int i = 0; i < m; i++)
    {
        //debug(mp.size());
        cin >> x[i] >> y[i] >> z[i];
        if(mp[x[i]]>=1 && mp[y[i]]>=1){
            mp[z[i]]++;
            //debug(mp.size());
        }
        //debug(x[i]);
        //debug(y[i]);
        //debug(z[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[x[i]] > 0 && mp[y[i]] > 0)
        {
            mp[z[i]]++;
            //debug(mp.size());
        }
        
    } 

    cout << mp.size() << "\n";
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}