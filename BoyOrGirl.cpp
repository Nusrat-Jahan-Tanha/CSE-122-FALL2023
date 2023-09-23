#include<iostream>
#include <string>
using namespace std;
int main() {
    string username;
    cin >> username;
    int distinctCount = 0;
    bool seen[26] = {false}; // To track if a character has been seen
    // Iterate through the username
    for (char ch : username) {
        if (!seen[ch - 'a']) {
            seen[ch - 'a'] = true;
            distinctCount++;
        }
    }
    // Check if the count is odd or even
    if (distinctCount % 2 == 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}

