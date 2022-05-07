#include <iostream>
using namespace std;

int main() {
    cout.tie(0);
    cin.tie(0);

    int inputValue;
    double max, sum = 0;
  
    cin >> inputValue;
    double numbers[inputValue];

    for (int i = 0; i < inputValue; i++) {
        cin >> numbers[i];
        if(max < numbers[i]) max = numbers[i];
    }

    for (int i =0 ; i < inputValue; i++) {
        numbers[i] = numbers[i] /max * 100.0;
        sum += numbers[i];
    }

    cout << sum / (double) inputValue;
    return 0;
}