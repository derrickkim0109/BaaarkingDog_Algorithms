#include <iostream>
#include <stdio.h>
using namespace std;

double first, second; 
int main() {
    cout.tie(0);
    cin.tie(0);

    cin >> first >> second; 
    cout.precision(12);
    cout << fixed;

    cout << first / second ; 
}