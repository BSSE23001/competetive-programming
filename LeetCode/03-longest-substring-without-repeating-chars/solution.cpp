#include <bits/stdc++.h>

using namespace std;

// Solution 1
// int lengthOfLongestSubstring(string s) {
    // if (s.empty()) return 0;
//     unordered_set<char> smap;
//     vector<int> counts;
//     int count = 1;
//     smap.insert(s[0]);
//     for(int i = 1; i < s.length(); ++i) {
//         if(smap.find(s[i]) != smap.end()) {
//             counts.push_back(count);
//             count = 1;
//             smap.erase(smap.begin(), smap.end());
//             continue;
//         }
//         ++count;
//         smap.insert(s[0]);
//     }
//     return *max_element(counts.begin(), counts.end());
// }

int lengthOfLongestSubstring(string s) {
    if (s.empty()) return 0;
    
    unordered_map<char, int> charIndex;
    int maxLen = 0;
    int left = 0;
    
    for (int right = 0; right < s.length(); ++right) {
        if (charIndex.find(s[right]) != charIndex.end()) {
            left = max(left, charIndex[s[right]] + 1);
        }
        charIndex[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    
    return maxLen;
}

int main(int argc, char const *argv[])
{
    cout << lengthOfLongestSubstring("abcabcbb")<< endl;
    return 0;
}
