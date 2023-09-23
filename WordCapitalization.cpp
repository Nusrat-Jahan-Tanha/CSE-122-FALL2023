#include<iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cin >> word;
    // Check if the word is not empty
    if (!word.empty()) {
        // Capitalize the first letter
        word[0] = toupper(word[0]);
    }
    // Output the capitalized word
    cout << word << endl;
    return 0;
}

