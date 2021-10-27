// Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
// A common subsequence of two strings is a subsequence that is common to both strings.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    //Determine the length of the outside loop
    int longest(string text1, string text2) {
        if (text1.length() >= text2.length()) {
            return text1.length();
        } else {
            return text2.length();
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        int counter = 0;
        int maxLength = longest(text1, text2);
        return counter;
    }

    int main () {
        string text1;
        string text2;

        cout << "Enter string 1: ";
        cin >> text1;
        cout << "Enter string 2: ";
        cin >> text2;

        return longestCommonSubsequence(text1, text2);
    }
};