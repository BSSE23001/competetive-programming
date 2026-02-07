import java.util.HashMap;
import java.util.Map;

public class solution {
    public int lengthOfLongestSubstring(String s) {
        if (s.isEmpty()) return 0;
        Map<Character, Integer> charIndex = new HashMap<Character, Integer>();
        int maxLength = 0;
        int left = 0;
        for (int right = 0; right < s.length(); ++right) {
            char current = s.charAt(right);
            if (charIndex.containsKey(current)) {
                left = Math.max(left, charIndex.get(current) + 1);
            }
            charIndex.put(current, right);
            maxLength = Math.max(maxLength, right - left + 1);
        }
        return maxLength;
    }

    public static void main(String[] args) {
        
    }
}