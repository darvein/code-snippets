// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector<vector<int>> arr;
	int n, q, size, tmp;
	int index, pos;

	cin >> n;
	cin >> q;

	for (int i = 0; i < n; ++i) {
		arr.push_back(vector<int> {});

		cin >> size;
		for (int j = 0; j < size; ++j) {
			cin >> tmp;
			arr[i].push_back(tmp);
		}
	}

	for (int i = 0; i < q; ++i) {
		cin >> index;
		cin >> pos;
		cout << arr[index][pos] << endl;
	}

	return 0;
}


