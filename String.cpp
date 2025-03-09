
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

// 1. Reverse Words in a String
string reverseWords(string s) {
    reverse(s.begin(), s.end());
    string ans = "", word = "";
    
    for (char c : s) {
        if (c != ' ') word += c;
        else if (!word.empty()) {
            reverse(word.begin(), word.end());
            ans += word + " ";
            word = "";
        }
    }
    if (!word.empty()) ans += word;
    
    return ans;
}


// 2. Remove Occurrences of a Substring
string removeOccurrences(string s, string part) {
    while (s.find(part) != string::npos) {
        s.erase(s.find(part), part.length());
    }
    return s;
}


// 3. Valid Palindrome
bool isPalindrome(string s) {
    string filtered = "";
    for (char c : s) {
        if (isalnum(c)) filtered += tolower(c);
    }
    
    int left = 0, right = filtered.length() - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) return false;
        left++;
        right--;
    }
    return true;
}


// 4. Permutation in String (Check if s2 contains a permutation of s1)
bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) return false;
    
    vector<int> countS1(26, 0), countS2(26, 0);
    for (char c : s1) countS1[c - 'a']++;
    
    for (int i = 0; i < s2.length(); i++) {
        countS2[s2[i] - 'a']++;
        if (i >= s1.length()) countS2[s2[i - s1.length()] - 'a']--;
        if (countS1 == countS2) return true;
    }
    return false;
}


// 5. String Compression (Compress consecutive characters)
int compress(vector<char>& chars) {
    int index = 0, i = 0;
    
    while (i < chars.size()) {
        char currentChar = chars[i];
        int count = 0;
        
        while (i < chars.size() && chars[i] == currentChar) {
            count++;
            i++;
        }
        
        chars[index++] = currentChar;
        if (count > 1) {
            for (char c : to_string(count)) chars[index++] = c;
        }
    }
    return index;
}
