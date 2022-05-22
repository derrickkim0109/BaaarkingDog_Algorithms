#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int inputValue; 
    cin >> inputValue;
    
    int sum = inputValue;
    int count = 0;

    while (true) {
        sum = (sum % 10) * 10 + ((sum / 10) + (sum % 10)) % 10;

        count++;

        if (sum == inputValue) break;
    }
}