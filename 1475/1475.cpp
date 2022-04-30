#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int inputValue;
    int countAmount = 1;
    int digits[10] = {};
    cin >> inputValue;

    while (inputValue > 0) {
        digits[inputValue%10]++;
        inputValue /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(i == 6 || i == 9) continue;
        countAmount = max(countAmount, digits[i]);
    }
    countAmount = max(countAmount, (digits[6] + digits[9]+1)/2);
    cout << countAmount;
}