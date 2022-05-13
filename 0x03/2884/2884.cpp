#include <iostream>
using namespace std;

int main() {
    cout.tie(0);
    cin.tie(0);

    int firstValue, secondValue;
    cin >> firstValue >> secondValue;

    if (secondValue < 45) {
        secondValue += 15;
        if(--firstValue < 0) firstValue = 23;
    }
    else secondValue -= 45;

    cout << firstValue << " " << secondValue ;
}
