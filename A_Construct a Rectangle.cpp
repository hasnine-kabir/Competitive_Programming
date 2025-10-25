#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sortAll(x) (x).begin(), (x).end()
#define rsortAll(x) (x).rbegin(), (x).rend()
#define N 1e5 + 7
#define mod 1e9 + 7
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    fastio;

    int t = 1;
    cin >> t; 
    while(t--) {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];
        
        sort(x,x+3);

        if(x[0]==x[1] && x[2]%2==0) cout << "YES" << endl;

        else if (x[1] == x[2] && x[0] % 2 == 0) cout << "YES" << endl;

        else if (x[0] + x[1] == x[2]) cout << "YES" << endl;

        else cout << "NO" << endl;        

        
    }

    return 0;
}