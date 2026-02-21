#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1) return s;

    vector<string> v(numRows, "");
    int d = 1;
    int row = 0;

    for (auto c : s) {
        v[row].push_back(c);
        row += d;

        if (row == numRows - 1) d = -1;
        if (row == 0) d = 1;
    }

    string res;
    for (auto x : v) res.append(x);

    return res;
}

int main() {
    string s;
    int numRows;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Enter number of rows: ";
    cin >> numRows;

    string result = convert(s, numRows);

    cout << "Converted string: " << result << endl;

    return 0;
}
