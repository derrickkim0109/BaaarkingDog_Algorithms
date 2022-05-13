#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    cout.tie(0);
    cin.tie(0);

    int inputValue;
    cin >> inputValue;

    for (int i = inputValue; i > 0 ; i--) {
        cout << i << "\n";
    }
}
