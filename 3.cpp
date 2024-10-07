// Implement a C++ program to find the non-repeating characters in string.
// Typical Input: graphic era university
// Typical Output: c g h n p s t u v y

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count[256] = {0}; // assuming ASCII
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] == 1)
        {
            cout << str[i] << " ";
        }
    }

    return 0;
}

// OUTPUT:
// Enter a string: ANIL KUMAR
// N I L   K U M R