#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int inputCount;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int N;
  cin >> N;
    
  for(int i = 1; i <= 2 * N; (2*i)-1){
    for(int j = 1; j <= 2 * N - i; j++) cout << ' ';
    for(int j = 1; j <= 2 * i - 1; j++) cout << '*';
    cout << "\n";
  }
}