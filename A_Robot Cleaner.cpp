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

    int t = 1;
    cin >> t; 
    while(t--) {
         while(t--) {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        int r = rb, c = cb;
        int dr = 1, dc = 1;
        int time = 0;

        while (r != rd && c != cd) {
            if (r + dr < 1 || r + dr > n) dr = -dr; // reflect on top/bottom walls
            if (c + dc < 1 || c + dc > m) dc = -dc; // reflect on left/right walls

            r += dr;
            c += dc;
            time++;
        }

        cout << time << "\n";
    } while(t--) {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        int r = rb, c = cb;
        int dr = 1, dc = 1;
        int time = 0;

        while (r != rd && c != cd) {
            if (r + dr < 1 || r + dr > n) dr = -dr; 
            if (c + dc < 1 || c + dc > m) dc = -dc; 
            r += dr;
            c += dc;
            time++;
        }

        cout << time << "\n";
    }
    return 0;    
}


