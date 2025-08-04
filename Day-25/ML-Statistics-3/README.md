# Statistical Inference Cheatsheet

This document contains essential concepts of **statistical inference** used in data science and machine learning — designed to be intuitive and GitHub-compatible.

---

## 1. Hypothesis Testing

**Purpose**: Make inferences about population parameters using sample data.

### Steps:
1. Define **Null Hypothesis (H₀)** and **Alternative Hypothesis (H₁)**
2. Choose significance level **α** (commonly 0.05)
3. Choose test type (**z**, **t**, or **χ²**)
4. Compute test statistic
5. Compare with critical value or compute **p-value**

### Decision Rule:
- If **p-value < α** → Reject H₀  
- Else → Fail to reject H₀

---

## 2. P-Value & Significance

- **P-value**: Probability of getting the observed result (or more extreme) if H₀ is true.
- **Interpretation**:
  - Low p-value → Strong evidence against H₀
  - High p-value → Weak evidence → Fail to reject H₀

---

## 3. Z-Test

### When to Use:
- Population standard deviation (**σ**) is known
- Sample size **n ≥ 30**

### Formula:
$$
z = \frac{\bar{x} - \mu}{\sigma / \sqrt{n}}
$$

Where:
- $\bar{x}$ = sample mean  
- $\mu$ = population mean  
- $\sigma$ = population standard deviation  
- $n$ = sample size

---

## 4. Type I and Type II Errors

| Error Type  | Meaning                            | Symbol | Controlled By     |
|-------------|------------------------------------|--------|--------------------|
| Type-I      | Rejecting a true null hypothesis   | α      | Significance level |
| Type-II     | Failing to reject a false H₀       | β      | Power of test      |

- **Power** = $1 - \beta$ → higher power means better ability to detect an effect.

---

## 5. T-Distribution

Used when:
- **Population SD is unknown**
- Sample size **n < 30**
- Distribution is similar to normal, but with heavier tails (more uncertainty)

---

## 6. T-Test

### When to Use:
- Sample size < 30
- Population SD unknown

### Formula:
$$
t = \frac{\bar{x} - \mu}{s / \sqrt{n}}
$$

Where:
- $s$ = sample standard deviation

### Types of t-tests:

| Test Type        | Use Case                                  |
|------------------|-------------------------------------------|
| One-sample       | Compare sample mean to population mean    |
| Two-sample       | Compare means of 2 independent samples    |
| Paired t-test    | Compare before–after for same subjects    |

---

## 7. Confidence Intervals (CI)

Range of values likely to contain population parameter with a given confidence level.

### Z-distribution (population SD known):
$$
CI = \bar{x} \pm z^* \cdot \frac{\sigma}{\sqrt{n}}
$$

### T-distribution (population SD unknown):
$$
CI = \bar{x} \pm t^* \cdot \frac{s}{\sqrt{n}}
$$

### Margin of Error (MoE):
- Using Z:
  $$
  MoE = z^* \cdot \frac{\sigma}{\sqrt{n}}
  $$
- Using T:
  $$
  MoE = t^* \cdot \frac{s}{\sqrt{n}}
  $$

---

## 8. One-Tailed vs Two-Tailed Tests

| Tail Type   | When to Use                        |
|-------------|-------------------------------------|
| One-tailed  | Directional hypothesis (e.g., ">") |
| Two-tailed  | Testing for "any difference" (≠)   |

---

## 9. Bayes' Theorem

### Formula:
$$
P(A \mid B) = \frac{P(B \mid A) \cdot P(A)}{P(B)}
$$

Used for:
- Updating beliefs given new evidence
- Conditional probability modeling

---

## 10. Chi-Square (χ²) Distribution

- Used for **categorical** data
- Skewed distribution, not symmetric
- Used in **goodness-of-fit** and **independence tests**

---

## 11. Chi-Square Test

### Types:

| Test Type         | Use Case                                          |
|-------------------|---------------------------------------------------|
| Goodness of Fit   | Does observed data match expected distribution?   |
| Test for Independence | Are two categorical variables related?       |

### Formula:
$$
\chi^2 = \sum \frac{(O_i - E_i)^2}{E_i}
$$

Where:
- $O_i$ = Observed frequency  
- $E_i$ = Expected frequency

### Degrees of Freedom:
- Goodness-of-Fit:  
  $$
  df = n - 1
  $$
- Test of Independence:  
  $$
  df = (r - 1)(c - 1)
  $$

---

## 12. Test Selection Guide

| Feature              | Z-Test       | T-Test        | Chi-Square Test        |
|----------------------|--------------|---------------|------------------------|
| Population SD known? | Yes          | No            | No                     |
| Sample Size          | n ≥ 30       | n < 30        | Any (categorical data) |
| Data Type            | Numerical    | Numerical     | Categorical            |
| Purpose              | Compare means| Compare means | Test associations      |
| Assumed Distribution | Normal       | t-distribution| χ²-distribution        |
| Example Use          | Avg = 70?    | Group A vs B  | Gender vs Preference   |

---


