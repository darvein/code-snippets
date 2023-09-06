// https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int s, q, i, tmp, index;
    std::vector<int> v;

    std::cin >> s;
    for (i = 0; i < s; ++i) {
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cin >> q;
    for (i = 0; i < q; ++i) {
        std::cin >> tmp;

        index = (std::lower_bound(v.begin(), v.end(), tmp)) - v.begin();
        if (v[index] == tmp) std::cout << "Yes " << index+1 << std::endl; 
        else std::cout << "No " << index+1 << std::endl;
    }

    return 0;
}
