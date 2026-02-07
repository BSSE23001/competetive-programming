public class Solution
{
    public static int LengthOfLongestSubstring(string s) {
        if (s.Length == 0) return 0;
        Dictionary<char, int> charIndex = [];
        int maxLength = 0;
        int left = 0;
        for (int right = 0; right < s.Length; ++right) {
            if (charIndex.ContainsKey(s[right]))
            {
                left = Math.Max(left, charIndex[s[right]] + 1);
            }
            charIndex[s[right]] = right;
            maxLength = Math.Max(maxLength, right - left + 1);
        }
        return maxLength;
    }
}