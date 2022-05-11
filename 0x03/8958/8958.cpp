#include <iostream>
#include <stdio.h>
using namespace std;


int oxCalculator(string& value) {
    int cumulative = 0; // 문자'O'의 누적 개수 
    int summary = 0;

    for (char &character : value) {

        if (character == 'O') {
            cumulative++;
            summary += cumulative;
        }
        else {
            cumulative = 0;
        }
    }
    return summary;
}

int main() {
    cout.tie(0);
    cin.tie(0);

    int inputValue;
    string oxValue;
    cin >> inputValue;

    for (int i = 0; i < inputValue; i++) {
        cin >> oxValue;
        cout << oxCalculator(oxValue) << "\n";
    }
    return 0;
}