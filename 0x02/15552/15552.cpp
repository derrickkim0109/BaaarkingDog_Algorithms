#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int inputCount;


int main(void) {
    ios_base :: sync_with_stdio(false);
    cout.tie(NULL);

    cin >> inputCount;
    int firstNumber[inputCount], secondNumber[inputCount];
    for (int nextInputCount = 0; nextInputCount < inputCount; nextInputCount++) {
        cin >> firstNumber[nextInputCount] >> secondNumber[nextInputCount];
    }
    
    for (int value = 0; value < inputCount; value++) {
        cout << firstNumber[value] + secondNumber[value] << "\n";
    }
}

 


