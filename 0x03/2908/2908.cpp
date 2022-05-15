#include <iostream>
#include <string>
using namespace std;


int main() {
    cin.tie(0);	
    cout.tie(0);

    string first, second;
    cin >> first >> second;

    string result;

    for (int i = 2; i >= 0; i--) {
        if (first[i] > second[i]) {
            result = first;
             break;   
        }
        else if (first[i] < second[i]) {
            result = second; 
            break;
        } 
    }
    
    cout << result[2]<< result[1] << result[0];
}
