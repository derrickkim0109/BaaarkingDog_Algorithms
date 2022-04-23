#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int numbers[21];

int beginNumber, endNumber;

int main(void) {
    ios_base :: sync_with_stdio(0);
    cout.tie(0);

    for (int number = 1; number < 21; number++) {
        numbers[number] = number;
    }
    
    for (int inputCount = 0; inputCount < 10; inputCount++) {
        cin >> beginNumber >> endNumber;

        reverse(numbers + beginNumber, numbers + endNumber + 1);
    }

    for (int value = 1; value < 21; value++) {
        cout << numbers[value] << " ";
    }
}

 


