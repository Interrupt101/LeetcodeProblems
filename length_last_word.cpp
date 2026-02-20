#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(string s) {
    int i = s.size() - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ')
        i--;

    int j = i;

    // Move to the beginning of the last word
    while (j >= 0 && s[j] != ' ')
        j--;

    return i - j;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int result = lengthOfLastWord(s);

    cout << "Length of last word: " << result << endl;

    return 0;
}
