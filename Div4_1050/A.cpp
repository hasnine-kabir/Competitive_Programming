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

    int t; cin >> t;
    
    while(t--) {

        int x, n; cin >> x >> n;

        int sum = (n % 2 == 0) ? 0 : x;  

        cout << sum << endl;

        
    }

    return 0;
}