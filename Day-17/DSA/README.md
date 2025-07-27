# Day 17 – DSA: String Problems

---

### Problem 1: Longest Common Prefix

- **Problem**: [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)
- **Approach**:
  - Sort the array of strings.
  - The common prefix of the entire list must be a prefix of the first and last strings.
  - Compare characters of the first and last strings until mismatch.
- **Time Complexity**: O(NlogN + M), where N is the number of strings and M is the length of the shortest string.
- **Space Complexity**: O(1)

---

### Problem 2: Isomorphic Strings

- **Problem**: [205. Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)
- **Approach**:
  - Create a mapping of characters from `s` to `t` and `t` to `s` using a vector.
  - Ensure that the mapping difference is consistent across the string.
  - If conflict arises, return false.
- **Time Complexity**: O(N), where N is the length of the strings.
- **Space Complexity**: O(1), using fixed-size vector of 150 elements.

---

### Problem 3: Find the Index of the First Occurrence in a String

- **Problem**: [28. Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)
- **Approach**:
  - Use the **naive string matching** approach.
  - For every index in `haystack`, check if the substring from that point matches `needle`.
- **Time Complexity**: O((N−M+1)×M), where N is the length of `haystack` and M is the length of `needle`.
- **Space Complexity**: O(1)

---
