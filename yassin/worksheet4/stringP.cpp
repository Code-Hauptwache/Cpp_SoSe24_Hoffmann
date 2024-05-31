#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverse(string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(s[i], s[n - i - 1]);
    }
}

bool palindrom(string& s) {
    string original = s;
    reverse(s);
    return equal(original.begin(), original.end(), s.begin(), s.end(), [](char a, char b) {
        return tolower(a) == tolower(b);
    });
}

int main() {
    string s;
    cout << "Geben Sie eine Zeichenkette ein: ";
    cin >> s;

    bool isPalindrome = palindrom(s);

    if (isPalindrome) {
        cout << s << " ist ein Palindrom." << endl;
    } else {
        cout << s << " ist kein Palindrom." << endl;
    }

    return 0;
}
