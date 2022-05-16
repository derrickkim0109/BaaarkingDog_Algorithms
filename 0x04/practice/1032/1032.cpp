
#include <iostream>

using namespace std;

int main()
{
    int inputValue; 
    cin >> inputValue;
    string valueStr[50];
    
    for (int i = 0; i < inputValue; i++) {
        cin >> valueStr[i];
    }
    
    char characterForComparing;
    for (int j = 0; j < valueStr[0].length();j++) {
        characterForComparing = valueStr[0][j];
        
        for (int i = 0; i < inputValue; i++) {
            if(characterForComparing != valueStr[i][j]) {
                characterForComparing = '?';
                break;
            }
        }
        cout << characterForComparing;
    }
    return 0;
}
