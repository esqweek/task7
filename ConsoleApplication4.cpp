﻿#include <iostream>
using namespace std;
int main() {
    int a, b, i;
    cin >> a >> b;
    for (i = a; i <= b; ++i) {
        cout << i - i * (i % 2) << " ";
    }
}