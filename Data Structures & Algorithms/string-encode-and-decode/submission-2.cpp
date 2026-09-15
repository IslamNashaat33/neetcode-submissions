#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    // ✅ Efficient Encoding with Length Prefix and Delimiter
    string encode(vector<string>& strs) {
        string encoded;
        for (const string& str : strs) {
            encoded += to_string(str.size()) + "#" + str; // Store length + delimiter
        }
        return encoded;
    }

    // ✅ Efficient Decoding by Extracting Length and String
    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++; // Locate delimiter `#`
            
            int length = stoi(s.substr(i, j - i)); // Extract length
            string word = s.substr(j + 1, length); // Extract the string
            
            decoded.push_back(word);
            i = j + 1 + length; // Move to next encoded part
        }
        
        return decoded;
    }
};
