# Day 25 – DSA Progress

## Problems Revised:

---

### 1. [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- **Approach**: Traverse both linked lists and compare nodes. Use a dummy node to attach the smaller node. Continue until one list is exhausted, then append the remaining part.
- **Time Complexity**: O(m + n)
- **Space Complexity**: O(1)

---

### 2. [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)
- **Approach**: Traverse the list, and whenever a duplicate is found, adjust the `.next` pointer to skip the duplicate node. Your current approach is quadratic, which works but can be improved.
- **Time Complexity**: O(n²)
- **Space Complexity**: O(1)

---

### 3. [3633. Earliest Finish Time for Land and Water Rides I](https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/)
- **Approach**: Try all combinations of taking a land ride first or a water ride first. Calculate the total finish time in both scenarios and return the minimum.
- **Time Complexity**: O(n × m)
- **Space Complexity**: O(1)

---
