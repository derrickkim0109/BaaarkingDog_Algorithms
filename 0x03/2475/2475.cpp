#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);	
    cout.tie(0);

    int number[5];
    int summary, result = 0;

    cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];

    for (int i = 0; i < 5; i++) number[i] = number[i] * number[i];

    for (int i = 0; i < 5; i++) summary += number[i];

    cout << summary % 10;
}
