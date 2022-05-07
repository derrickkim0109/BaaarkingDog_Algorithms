#include <iostream>
using namespace std;

int first, second; 
int main() {
    cout.tie(0);
    cin.tie(0);

    cin >> first >> second; 
    if (first > second) cout << ">";
    else if (first < second) cout << "<";
    else cout << "==";
}