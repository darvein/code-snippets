#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, tmp;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		v.push_back(tmp);
	}

	reverse(v.begin(), v.end());

	for (int i = 0; i < n; ++i) cout << v[i] << ' ';

	return 0;
}
