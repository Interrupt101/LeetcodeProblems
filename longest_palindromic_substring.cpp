#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    if (s.size() == 0 || s.size() == 1) return true;

    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }

    return true;
}

string longestPalindrome(string s) {
    if (s.size() == 0 || s.size() == 1) return s;

    string res;
    int maxlen = 0;

    for (int i = 0; i < s.size() - maxlen; i++) {
        for (int j = s.size() - 1; j >= i + maxlen; j--) {
            if (s[j] != s[i]) continue;

            string str = s.substr(i, j - i + 1);

            if (isPalindrome(str) && str.size() > maxlen) {
                maxlen = str.size();
                res = str;
            }
        }
    }

    return res;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string result = longestPalindrome(input);

    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}
