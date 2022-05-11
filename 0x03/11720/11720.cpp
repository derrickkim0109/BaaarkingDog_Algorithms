#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    cout.tie(0);
    cin.tie(0);

    int numberAmount; 
    cin >> numberAmount;

    char array[numberAmount];
    cin >> array;
    int summary = 0;

    for (int i = 0; i < numberAmount; i++) {
        summary += array[i] - '0';
    }

    cout << summary;
    return 0;
}