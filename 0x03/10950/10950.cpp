#include <bits/stdc++.h>
using namespace std;

int summary;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int inputValue; 
    cin >> inputValue;

    for (int i = 0; i < inputValue; i++) {
        int first, second;
        cin >> first >> second;
        summary = first + second; 
        cout << summary << "\n";
    }
}