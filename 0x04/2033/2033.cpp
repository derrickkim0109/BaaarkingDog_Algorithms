#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int inputValue, ten = 10, remainder; 

    cin >> inputValue;
    while (inputValue > ten) {
        remainder = inputValue % ten;
        inputValue -= remainder;
        
        if(remainder >= 5 * (ten / 10))
            inputValue += ten;
        
        ten *= 10;
	}

    cout << inputValue;
    return 0;
}