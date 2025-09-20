#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define revAll(x) sort((x).rbegin(), (x).rend())
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    fastio;

   int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int l_prime = max(l, -m);
        int r_prime = l_prime + m;

        cout << l_prime << " " << r_prime << endl;
    }
    return 0;
}
