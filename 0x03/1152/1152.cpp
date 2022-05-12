#include <iostream>
#include <string>
using namespace std;
int main() {
    string phrase;
    getline(cin, phrase);
    int count = 1;
    
    if(phrase.empty()) {
        cout << "0";
        return 0;
    }
    
    for(int i = 0; i < phrase.length(); i++) {
        if(phrase[i] == ' ') count++;
    }

    if(phrase[0] == ' ') count--;
    if(phrase[phrase.length()-1] == ' ') count--;

    cout << count;
    return 0;
}
