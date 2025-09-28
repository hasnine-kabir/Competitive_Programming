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

    
       int a, b, c;
       cin >> a >> b >> c;
       if (a == b || b == c || a == c) {
           cout << "Yes" << endl;
       } else {
           cout << "No" << endl;
       }

    return 0;
}