#include <iostream>
#include <string>

using namespace std;

namespace myString {
    void reverse(string& str); 
}

int main()
{
    string str;
    string reversedStr;

    cout << "Please enter a string: ";
    cin >> str;

    reversedStr = str;

    myString::reverse(reversedStr);

    cout << str << " mirrored is " << reversedStr << endl;

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
}
