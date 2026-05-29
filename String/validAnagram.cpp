#include <iostream>
#include <string>
using namespace std;

/*
Problem:
Given two strings s and t, return true if t is an anagram of s,
otherwise return false.

An Anagram means both strings contain the same characters
with the same frequency.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        // If lengths are different
        if(s.length() != t.length()) {
            return false;
        }

        int count[26] = {0};

        // Count characters of s
        for(char c : s) {
            count[c - 'a']++;
        }

        // Remove characters using t
        for(char c : t) {
            count[c - 'a']--;
        }

        // Check counts
        for(int i = 0; i < 26; i++) {
            if(count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {

    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if(obj.isAnagram(s, t)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}