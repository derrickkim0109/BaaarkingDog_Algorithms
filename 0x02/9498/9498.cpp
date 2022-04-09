#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int a;
int main(void) {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a ; 
    if (a >= 90 && a <= 100) {
        cout << "A" ;
    } else if (a >= 80 && a <= 89) {
        cout << "B" ;
    } else if (a >= 70 && a <= 79) {
        cout << "C" ;
    } else if (a >= 60 && a <= 69) {
        cout << "D" ;
    } else {
        cout << "F" ;
    } 
}

