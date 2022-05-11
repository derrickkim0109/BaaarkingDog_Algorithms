#include <bits/stdc++.h>
using namespace std;

int summary;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int first, second;
    while(cin >> first >> second) {
        if (!(first == 0 && second == 0)) 
            cout << first + second << "\n";
    }
    return 0;
}