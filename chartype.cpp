#include <iostream>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
    char x;
    cout << "Enter a character: " << endl;
    cin >> x;

    if (isalpha(x)) { //isalpha checks whether the character is in the alphabet or not
        char bigX = tolower(x); /* if I did char x == a, e, i, o, u it wouldn't read the uppercase versions of the vowels as a vowel. 
        In order for it to read the uppercase letters as vowels too, we can do tolower which converts any uppercase letter to lowercase then compares the 
        input to see if it satisfies the condition. */
        if (bigX == 'a' || bigX == 'e' || bigX == 'i' || bigX == 'o' || bigX == 'u') {
            cout << x << " is a vowel" << endl; }
        else {
            cout << x << " is a consonant" << endl; } 
        } else if (isdigit(x)) { //checks if x is a digit
            cout << x << " is a digit" << endl; }
        else if (ispunct(x)) { //checks if x is a punctuation
            cout << x << " is a punctuation" << endl; }
        else {
            cout << x << " is not recognised" << endl; }

return 0;
}