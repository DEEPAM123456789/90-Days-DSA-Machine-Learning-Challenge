# Statistics Revision – Day 23

## Covered Concepts:

---

### 1. PMF vs PDF
- **PMF (Probability Mass Function)**: Used for discrete random variables; it gives the probability of exact outcomes.
- **PDF (Probability Density Function)**: Used for continuous random variables; it gives the *density* of probabilities, not exact ones.

---

### 2. PDF via CDF
- **CDF (Cumulative Distribution Function)**: Probability that a random variable is ≤ x.
- **PDF is the derivative of CDF** for continuous variables.

---

### 3. Discrete Uniform Distribution
- Every value in the domain has **equal** probability.
- Example: Rolling a fair die, each number has probability `1/6`.

---

### 4. Bernoulli Distribution
- Models binary outcomes (success/failure).
- Formula:  
  `P(X = 1) = p`,  
  `P(X = 0) = 1 - p`

---

### 5. Binomial Distribution
- Repeated Bernoulli trials.
- Formula:  
  `P(X = k) = C(n, k) * p^k * (1 - p)^(n - k)`  
  where `C(n, k)` is the binomial coefficient.

---

### 6. Poisson Distribution
- Used when counting occurrences over time/space.
- Formula:  
  `P(X = k) = (λ^k * e^(-λ)) / k!`

---

### 7. Continuous Uniform Distribution
- Every value between `[a, b]` is equally likely.
- PDF:  
  `f(x) = 1 / (b - a)` for `a ≤ x ≤ b`

---

### 8. Normal Distribution
- Bell-shaped, symmetric about the mean.
- Most values cluster around the mean.
- Formula:  
  `f(x) = (1 / √(2πσ²)) * e^(-(x - μ)² / (2σ²))`

---

### 9. Standard Normal Distribution
- Normal distribution with `μ = 0`, `σ = 1`.
- Z-scores are used to standardize values.

---

### 10. Central Limit Theorem (CLT)
- The **sampling distribution** of the sample mean approaches a **normal distribution** as the sample size grows (`n ≥ 30`).
- Important because it lets us apply normality assumptions to non-normal data in large samples.

---

### 11. Hypothesis Testing
- **Null Hypothesis (H₀)**: No effect or status quo.
- **Alternate Hypothesis (H₁)**: Claim you want to test.
- Steps:
  1. Set significance level `α` (e.g., 0.05)
  2. Compute the test statistic (Z or t)
  3. Find p-value
  4. Compare p-value to `α`
  5. Accept or reject H₀

---
### Quick Summary Table:

| **Distribution**            | **Type**     | **Mean (μ)**         | **Variance (σ²)** | **Use Case**                           |
| --------------------------- | ------------ | -------------------- | ----------------- | -------------------------------------- |
| PMF                         | Discrete     | -                    | -                 | Prob. of exact value (e.g., coin toss) |
| PDF                         | Continuous   | -                    | -                 | Prob. density over interval            |
| Discrete Uniform            | Discrete     | (a + b)/2            | ((b-a+1)² - 1)/12 | Dice roll                              |
| Bernoulli                   | Discrete     | p                    | p(1 - p)          | One trial with success/failure         |
| Binomial                    | Discrete     | np                   | np(1 - p)         | Multiple coin tosses                   |
| Poisson                     | Discrete     | λ                    | λ                 | Events per interval                    |
| Continuous Uniform          | Continuous   | (a + b)/2            | (b - a)²/12       | Picking random value between a & b     |
| Normal                      | Continuous   | μ                    | σ²                | Height, IQ scores, etc.                |
| Standard Normal             | Continuous   | 0                    | 1                 | Z-scores, comparison                   |
| Central Limit Theorem (CLT) | Meta Concept | μ (same as original) | σ²/n              | Sampling distribution of the mean      |
