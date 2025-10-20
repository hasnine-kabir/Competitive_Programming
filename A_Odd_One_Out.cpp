#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sortAll(x) (x).begin(), (x).end()
#define rsortAll(x) (x).rbegin(), (x).rend()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    fastio;

    int t;
    cin >> t; 
    while(t--) {

        int a,b,c; cin >> a >> b >> c;

        if(a==b) cout << c << endl;
        else if(b==c) cout << a << endl;
        else cout << b << endl;

        
    }

    return 0;
}