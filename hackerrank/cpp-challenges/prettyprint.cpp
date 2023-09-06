// https://www.hackerrank.com/challenges/prettyprint/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

typedef long long LL;

int main() {
    int n, i;
    float a, b, c;

    std::cin >> n;
    for (i = 0; i < n; ++i) {
        std::cin >> a >> b >> c;
    }

    printf("%a\n", a);
    printf("%15.2f\n", b);
    printf("%E\n", c);

    return 0;
}
