// Construct a C++ program that removes a specific character from a given string and return the updated string.
// Typical Input: computer science is the future
// Typical Output: compuer science is he fuure

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, updateStr;
    cout << "Enter a string: ";
    getline(cin, str);
    char ch;
    cout << "Enter a character to remove: ";
    cin >> ch;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            updateStr += str[i];
        }
    }
    cout << "Updated string: " << updateStr << endl;
    return 0;
}

// OUTPUT:
//  Enter a string: ANIL KUMAR
//  Enter a character to remove: A
//  Updated string: NIL KUMR