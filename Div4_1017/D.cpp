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
    int t;
    cin >> t;
    while(t--) {
        string p, s;
        cin >> p >> s;
        int n = p.size();
        int m = s.size();
        int i = 0, j = 0;
        bool flag = true;

        while(i < n && j < m) {
            if(p[i] != s[j]) {
                flag = false;         // hene dui string er prothom character mile kina deha , eda repeat hobe jtokhn size er modde thakbe
                break;
            }

       
            char c = p[i];
            int countP = 0;
            while(i < n && p[i] == c) {     // p te c (L ba R) koybar ase deha
                countP++; 
                i++;
            }

           
            int countS = 0;
            while(j < m && s[j] == c) {         // s te c (L ba R) koybar ase deha
                countS++;
                j++;
            }

          
            if(countS < countP || countS > 2 * countP) {
                flag = false;                               //hene p er c er count s er count er cheye beshi ba 2 guner beshi hoile false
                break;                                      
            }
        }

    
        if(i != n || j != m) flag = false;

        cout << (flag ? "YES" : "NO") << endl;
    }
}


  
