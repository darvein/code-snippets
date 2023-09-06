#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a, b, c;
    int res = 0;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        if ((a + b + c) >= 2) res++;
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
