#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int year;
int main(void) {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> year;

    if(year % 4 == 0) {
        if(year % 400 == 0) cout << 1;
        else if(year % 100 == 0) cout << 0;
        else cout << 1;
    } else cout << 0;
}

    