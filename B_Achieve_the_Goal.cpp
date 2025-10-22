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

    ll n,k,m,a,sum=0; cin >> n >> k >> m;
    
    for(int i=0; i< n-1;i++){
        cin >> a;
        sum += a;
    }
    int y= (m*n)-sum;
    
    cout << (y > k ? -1 : (y < 0 ? 0 : y)) << endl;

    return 0;
}