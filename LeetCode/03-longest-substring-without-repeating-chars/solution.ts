function lengthOfLongestSubstring(s: string): number {
  if (s.length == 0) return 0;
  let charIndex: Map<string, number> = new Map<string, number>();
  let maxLength: number = 0;
  let left: number = 0;
  for (const [i, char] of [...s].entries()) {
    if (charIndex.has(char)) {
      left = Math.max(left, charIndex.get(char)! + 1);
    }
    charIndex.set(char, i);
    maxLength = Math.max(maxLength, i - left + 1);
  }
  return maxLength;
}
