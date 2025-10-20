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

    int t ;
    cin >> t;
    char miss=' '; 
    while(t--) {
        char arr[4][4];

        for (int i = 1; i <= 3; i++){
            for (int j = 1; j <= 3; j++){
                cin >> arr[i][j];
            }
        }

        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
                if(arr[i][j]=='?'){
                    if(i==1){
                        if((arr[i+1][j]== 'B' && arr[i+2][j]=='C') || (arr[i+1][j]== 'C' && arr[i+2][j]=='B')){
                            miss='A';
                        }else if((arr[i+1][j]== 'A' && arr[i+2][j]=='B') || (arr[i+1][j]== 'B' && arr[i+2][j]=='A')){
                            miss='C';
                        }else if((arr[i+1][j]== 'A' && arr[i+2][j]=='C') || (arr[i+1][j]== 'C' && arr[i+2][j]=='A')){
                            miss='B';
                        }
                    }
                    else if(i==2){
                        if((arr[i-1][j]== 'B' && arr[i+1][j]=='C') || (arr[i-1][j]== 'C' && arr[i+1][j]=='B')){
                            miss='A';
                        }else if((arr[i-1][j]== 'A' && arr[i+1][j]=='C') || (arr[i-1][j]== 'C' && arr[i+1][j]=='A')){
                            miss='B';
                        }else{
                            miss='C';
                        }
                    }
                    else if(i==3){
                        if((arr[i-1][j]== 'B' && arr[i-2][j]=='C') || (arr[i-1][j]== 'C' && arr[i-2][j]=='B')){
                            miss='A';
                        }else if((arr[i-1][j]== 'A' && arr[i-2][j]=='C') || (arr[i-1][j]== 'C' && arr[i-2][j]=='A')){
                            miss='B';
                        }else{
                            miss='C';
                        }
                    }
                }
            }
        } 
        cout << miss << endl; 
    }

    return 0;
}
