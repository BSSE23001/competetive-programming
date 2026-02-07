def lengthOfLongestSubstring(s: str) -> int:
    if s == "":
        return 0
    charIndex: dict[str, int] = {}
    maxlength: int = 0
    left: int = 0

    for right in range(len(s)):
        if s[right] in charIndex and charIndex[s[right]] >= left:
            left = charIndex[s[right]] + 1
        charIndex[s[right]] = right
        maxlength = max(maxlength, right -left +1)

    return maxlength
