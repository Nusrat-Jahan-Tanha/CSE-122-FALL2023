#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count[4] = {0}; // Initialize an array to count occurrences of 1, 2, and 3.
    // Count the occurrences of each number.
    for (char c : s) {
        if (c >= '1' && c <= '3') {
            count[c - '0']++;
        }
    }
    string newSum = "";
    for (int i = 1; i <= 3; i++) {
        // Append i to the newSum as many times as it occurred in the original string.
        while (count[i] > 0) {
            newSum += to_string(i);
            newSum += '+';
            count[i]--;
        }
    }
    // Remove the last '+' character.
    newSum.pop_back();
    cout << newSum << endl;
    return 0;
}
