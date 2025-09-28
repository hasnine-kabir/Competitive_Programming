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
    int n;
    cin >> n;
    int A[n+1], B[n+1];
    int arr[n+1] = {0}; 

    for(int i = 1; i <= n; i++) cin >> A[i] >> B[i];

  
    for(int i = 1; i <= n; i++){
        if(A[i] == 0 && B[i] == 0) arr[i] = 1;
    }


    return 0;
}