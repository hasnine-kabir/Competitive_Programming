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
        vl vec;
        ll k;
        for(int i=0; i<10000; i++){
            if(i%3!=0 && i%10 !=3){
                vec.pb(i);
            }

        }
        cin >> k;
        cout << vec[k-1] << "\n";
        
    }

    return 0;
}