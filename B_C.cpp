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

    int n,m,x;cin>> n>>m;

    vi vec;

    for(int i=0;i<n;i++){
      int x ; cin >> x;
      vec.push_back(x);
    }
    vi ff;
    for(int j=0;j<m;j++){
        ff[j]=vec[m];
        m++;
    }
    for(int k=m;k<n-m;k++)
        ff[k]=vec[m];
    return 0;
}