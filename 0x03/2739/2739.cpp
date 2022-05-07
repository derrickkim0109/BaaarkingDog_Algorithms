#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int inputValue;
    cin >> inputValue;
    for (int j = 1; j <= 9; j++)
        cout << inputValue << " * " << j <<" = " << inputValue * j << "\n"; 
}