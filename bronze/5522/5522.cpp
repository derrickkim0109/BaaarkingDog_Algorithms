#include <iostream>

using namespace std;

int main()
{
    int inputValue, sum = 0; 
    for (int i = 0; i < 5; i++) {
        cin >> inputValue;
        sum += inputValue;
    }

    cout << sum;
    return 0;
}
