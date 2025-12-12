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
    int n,x;cin >> n;
    vi vec;

    while(cin >>x){
        vec.push_back(x);
    }

    int seg = vec.size()/7,xx=0;

    for(int i=0;i<seg;i++){
        int sum=0;
            for(int j=0;j<7;j++){
                sum+=vec[xx++];      
            }
        cout << sum << " ";
        
    }
    return 0;
}