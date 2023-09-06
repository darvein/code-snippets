/**
 * problem: https://codeforces.com/problemset/problem/71/A
 *
 * all words greather than 10 characters
 * Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;

    string word;
    for(int i=1; i<=n; i++){
        cin >> word;

        if(word.size() > 10) 
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        else
            cout << word << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
