#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int n, x; // n: 입력할 개수, x : 비교할 숫자.
int a[10005];
int main(void) {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x; 
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if(a[i] < x) cout << a[i] << ' ';
   } 
}