#include <iostream>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
    char x;
    cout << "Enter a character: " << endl;
    cin >> x;

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {   
    cout << x << " is a vowel" << endl;
    }
    if (x == 'b') {   
    cout << x << " is a consonant" << endl;
    }
    if (x == 1) {   
    cout << x << " is a digit" << endl;
    }
    if (x == ',') {   
    cout << x << " is a puntuation" << endl;
    }
    if (x == '£') {   
    cout << x << " is not recognised" << endl;
    }

return 0;
}