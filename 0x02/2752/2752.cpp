#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int a, b, c;
int main(void) {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c ; 

    int d, e, f; // 
    d = min({a,b,c});
    f = max({a,b,c});
    e = a + b + c - d - f;

    cout << d << ' ' << e << ' ' << f;
}

    