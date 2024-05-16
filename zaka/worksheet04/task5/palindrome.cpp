#include <iostream>
#include <string>
#include <algorithm> // For transform function

using namespace std;

namespace myString {
    void reverse(string& str);
    bool palindrom(string& s);
}

// Function to convert string to lower case
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main()
{
    string str;
    string reversedStr;

    cout << "Please enter a string: ";
    cin >> str;

    if (myString::palindrom(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

namespace myString {
    void reverse(string& str)
    {
        int strLen = str.length();
        string reverseStr = "";

        for (int i = 0; i < strLen; ++i) {
            reverseStr += str[strLen - 1 - i];
        }

        str = reverseStr;
    }

    bool palindrom(string& s)
    {
        string originalStr = toLowerCase(s);
        string reversedStr = originalStr;

        reverse(reversedStr);

        return originalStr == reversedStr;
    }
}
