#include <bits/stdc++.h>
using namespace std;

int digits[1000001];
bool occur[2000001];
int inputValue, resultValue;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int countAmount = 0;
    cin >> inputValue;

    for (int i = 0; i < inputValue; i++) {
        cin >> digits[i];
    }
    cin >> resultValue;

    for (int i = 0; i < inputValue; i++) {
        if (resultValue - digits[i] > 0
         && occur[resultValue-digits[i]]) countAmount++;
        occur[digits[i]] = true;
    }
    cout << countAmount;
}