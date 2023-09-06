// https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int size, tmp;
    std::vector<int> v;

    cin >> size;
    for (int i = 0; i < size; ++i) {
        std::cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < size; ++i) {
        std::cout << v[i] << " ";
    }

    return 0;
}
