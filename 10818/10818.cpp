#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int inputValue;

    cin >> inputValue;

    int numbers[1000001];

    for (int i = 0; i < inputValue; i++) {
        cin >> numbers[i];
    }
    sort(numbers, numbers + inputValue);
    
    cout << numbers[0] << " " << numbers[inputValue-1];
}