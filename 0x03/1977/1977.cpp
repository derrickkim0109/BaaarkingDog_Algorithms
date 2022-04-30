#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int fromThisNumber, toThisNumber; 
    cin >> fromThisNumber >> toThisNumber;

    int summary = 0;
    int min = 10001;
    int countNumber = 0;
    for (int i = 1; i <= 100; i++) {
        if (i*i >= fromThisNumber && i*i <= toThisNumber) {
            countNumber++;
            int result = i * i;
            summary += result;
            if (min > i * i) min = result;
        }
    }

    if(countNumber == 0) {
        cout << "-1";
        return 0;
    }

    cout << summary << '\n' << min;
}