# Day-12 DSA Problems

## 1. N-Queens
- **Problem:** [51. N-Queens](https://leetcode.com/problems/n-queens/)
- **Approach:** Backtracking
- **Logic:**
  - Try placing a queen in every column of current row.
  - Before placing, check:
    - Vertical column
    - Left diagonal
    - Right diagonal
  - If valid, place and move to next row.
  - Backtrack and remove queen.
- **Time Complexity:** O(N!), for N rows
- **Space Complexity:** O(N²)

---

## 2. Power of Two
- **Problem:** [231. Power of Two](https://leetcode.com/problems/power-of-two/)
- **Approach:** Recursion
- **Time Complexity:** O(logN)
- **Space Complexity:** O(logN)

---

## 3. Power of Three
- **Problem:** [326. Power of Three](https://leetcode.com/problems/power-of-three/)
- **Approach:** Recursion
- **Time Complexity:** O(logN)
- **Space Complexity:** O(logN)

---

## 4. Power of Four
- **Problem:** [342. Power of Four](https://leetcode.com/problems/power-of-four/)
- **Approach:** Recursion
- **Time Complexity:** O(logN)
- **Space Complexity:** O(logN)

---

## 5. Fibonacci Number
- **Problem:** [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)
- **Approach:** Basic Recursion
- **Time Complexity:** O(2^N)
- **Space Complexity:** O(N), due to recursion stack
