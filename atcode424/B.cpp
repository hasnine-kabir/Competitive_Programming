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

    int N, M, K;
    cin >> N >> M >> K;

    vector<int> solved_count(N + 1, 0);
    vector<int> completion_time(N + 1, -1);  
    vector<vector<bool>> solved(N + 1, vector<bool>(M + 1, false));

    for (int i = 1; i <= K; i++) {
        int Ai, Bi;
        cin >> Ai >> Bi;

        if (!solved[Ai][Bi]) {
            solved[Ai][Bi] = true;
            solved_count[Ai]++;
            if (solved_count[Ai] == M && completion_time[Ai] == -1) {
                completion_time[Ai] = i;
            }
        }
    }

    vector<pair<int,int>> result;
    for (int i = 1; i <= N; i++) {
        if (completion_time[i] != -1) {
            result.push_back({completion_time[i], i});
        }
    }

    sort(result.begin(), result.end());

    for (auto &p : result) {
        cout << p.second << " ";
    }
    cout << endl;

    return 0;
}

