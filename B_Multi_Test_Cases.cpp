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

    int t ;
    cin >> t; 
    while(t--) {
    int n;cin>>n;
    vector<ll>vec;
    
    for (int i =0; i < n; i++){
        int x;cin>>x;
        vec.push_back(x);
    }
    int cnt =0; 
    for (int i =0; i < n; i++){
        if(vec[i]%2!=0){
            cnt ++;
        }
    }cout << cnt << endl;
 
    }

    return 0;
}