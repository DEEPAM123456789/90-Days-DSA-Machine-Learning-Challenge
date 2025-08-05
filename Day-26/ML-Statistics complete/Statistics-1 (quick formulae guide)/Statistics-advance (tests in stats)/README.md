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

## 12. Mean and Variance

**Mean (μ):**

$$
\mu = \frac{1}{n} \sum_{i=1}^{n} x_i
$$

**Sample Variance (s²):**

$$
s^2 = \frac{1}{n-1} \sum_{i=1}^{n} (x_i - \bar{x})^2
$$

**Population Variance (σ²):**

$$
\sigma^2 = \frac{1}{n} \sum_{i=1}^{n} (x_i - \mu)^2
$$

---

## 13. F-distribution

**Definition:** Ratio of two independent chi-square distributions divided by their degrees of freedom.

**F-statistic:**

$$
F = \frac{S_1^2}{S_2^2}
$$

**Shape Parameters:**

$$
F \sim F(d_1, d_2)
$$

where \( d_1 \), \( d_2 \) are degrees of freedom of numerator and denominator.

---

## 14. F-Test (Test for Equality of Variances)

**Hypotheses:**

- Null Hypothesis: \( H_0: \sigma_1^2 = \sigma_2^2 \)
- Alternative Hypothesis: \( H_1: \sigma_1^2 \neq \sigma_2^2 \)

**F-statistic:**

$$
F = \frac{s_1^2}{s_2^2} \quad \text{where } s_1^2 > s_2^2
$$

**Decision Rule:**
Compare calculated \( F \) with critical value at α-level using:

$$
df_1 = n_1 - 1, \quad df_2 = n_2 - 1
$$

---

## 15. ANOVA (Analysis of Variance)

**Purpose:** Compare means of 3 or more groups using variance decomposition.

**Assumptions:**
- Independence of observations
- Normality within each group
- Equal variances (homogeneity)

**Hypotheses:**
- \( H_0: \mu_1 = \mu_2 = \cdots = \mu_k \)
- \( H_1: \) At least one mean differs

---

## 16. One-Way ANOVA

Used when: One categorical independent variable (≥ 3 groups)

**Formulas:**

- Between-group variance:

$$
MS_B = \frac{SS_B}{k - 1}
$$

- Within-group variance:

$$
MS_W = \frac{SS_W}{n - k}
$$

- F-ratio:

$$
F = \frac{MS_B}{MS_W}
$$

---

## 17. Two-Way ANOVA

Used when: Two categorical independent variables.

**Total variation decomposed:**
- \( SS_A \): Variation due to factor A
- \( SS_B \): Variation due to factor B
- \( SS_{AB} \): Interaction effect
- \( SS_E \): Error (within group)

**F-statistics:**

$$
F_A = \frac{MS_A}{MS_E}, \quad
F_B = \frac{MS_B}{MS_E}, \quad
F_{AB} = \frac{MS_{AB}}{MS_E}
$$

---

## 18. Repeated Measures ANOVA

Used when: Same subjects tested across time/conditions.

- Adjust for within-subject correlation
- Use Mauchly’s Test for sphericity
- If violated: Greenhouse-Geisser correction

---

## 19. ANOVA vs t-test

| Criteria          | t-test                               | ANOVA                                  |
|------------------|---------------------------------------|----------------------------------------|
| Groups Compared  | 2                                     | 3 or more                              |
| Types            | One-sample, two-sample, paired        | One-way, Two-way, Repeated Measures    |
| Test Statistic   | \( t = \frac{\bar{x}_1 - \bar{x}_2}{SE} \) | \( F = \frac{MS_B}{MS_W} \)              |

---



## 20. Test Selection Guide

| Feature              | Z-Test       | T-Test        | Chi-Square Test        |
|----------------------|--------------|---------------|------------------------|
| Population SD known? | Yes          | No            | No                     |
| Sample Size          | n ≥ 30       | n < 30        | Any (categorical data) |
| Data Type            | Numerical    | Numerical     | Categorical            |
| Purpose              | Compare means| Compare means | Test associations      |
| Assumed Distribution | Normal       | t-distribution| χ²-distribution        |
| Example Use          | Avg = 70?    | Group A vs B  | Gender vs Preference   |

---


