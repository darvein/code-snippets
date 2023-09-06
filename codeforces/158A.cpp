#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int score;
    vector<int> scores;
    for(int i=0; i<n; i++){
        cin >> score;
        scores.push_back(score);
    }

    int total = 0;
    for(int i=0; i<n; i++){
        if(scores[i] >= scores[k] && scores[i] > 0)
            total++;
        else
            break;
    }

    cout << total << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
