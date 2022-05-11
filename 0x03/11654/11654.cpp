#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    cout.tie(0);
    cin.tie(0);

    char inputValue; 
    cin >> inputValue;

    cout << (int)inputValue;
}