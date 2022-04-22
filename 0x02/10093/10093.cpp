#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

long long firstNumber, secondNumber;

int main(void) {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> firstNumber >> secondNumber; 

    if (firstNumber > secondNumber) swap(firstNumber, secondNumber);

    if (firstNumber == secondNumber || secondNumber - firstNumber == 1) cout << 0;
    else { 
        cout << secondNumber - firstNumber - 1 << "\n";

        for (long long first = firstNumber+1; first < secondNumber; first++) {
            cout << first << " ";
        }
    }
  
}

