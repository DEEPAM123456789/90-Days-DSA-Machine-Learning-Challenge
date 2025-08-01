# Statistics Revision – Day 22

This file contains all the fundamental concepts you revised today with short, intuitive explanations and key formulae.

---

## Intro to Statistics
**Statistics** is the science of learning from data. It helps us **collect**, **analyze**, **interpret**, and **present** data to make better decisions.

> Think of it as turning raw data into meaningful stories.

---

## Types of Statistics

### 1. **Descriptive Statistics**  
Summarizes data using numbers, tables, or graphs.

- Example: Average marks of a class, height distribution of people.
- Tools: Mean, median, mode, range, variance, standard deviation.

### 2. **Inferential Statistics**  
Helps draw conclusions about a population using a sample.

- Example: Predicting election results based on a small survey.
- Tools: Hypothesis testing, confidence intervals, regression.

---

## Types of Sampling

Sampling is how we select a portion (sample) of data from a bigger group (population).

- **Random Sampling**: Everyone has an equal chance (like lottery).
- **Systematic Sampling**: Every k-th person is picked.
- **Stratified Sampling**: Divide into groups, then randomly sample each group.
- **Cluster Sampling**: Divide into clusters, randomly pick clusters, and sample all from them.

---

## Types of Data

- **Qualitative (Categorical)**:
  - *Nominal*: No order (e.g., color, gender).
  - *Ordinal*: Ordered (e.g., low/medium/high).

- **Quantitative (Numerical)**:
  - *Discrete*: Countable (e.g., number of kids).
  - *Continuous*: Measurable (e.g., height, weight).

---

## Measures of Central Tendency

These tell us where the "center" of the data lies.

### 1. **Mean (Average)**  
Sum of all values divided by total count.  
Formula:  
$$
\text{Mean} = \frac{x_1 + x_2 + ... + x_n}{n}
$$

> Think of it as "fair share" for everyone.

---

### 2. **Median**  
The middle value when data is sorted.

- If odd elements → middle value.
- If even elements → average of two middle values.

> Helps avoid the effect of outliers (e.g., salary data with 1 billionaire).

---

### 3. **Mode**  
Most frequently occurring value.

> Used when we care about popularity or frequency.

---

## Measures of Spread (Dispersion)

These show how "spread out" or "scattered" the data is.

### 1. **Range**
$$
\text{Range} = \text{Max} - \text{Min}
$$

> It’s the simplest way to know how wide your data is.

---

### 2. **Variance**
It tells us how far each value is from the mean on average.

Formula (Population Variance):  
$$
\sigma^2 = \frac{1}{N} \sum_{i=1}^{N} (x_i - \mu)^2}
$$

> High variance = more spread out data.  
> Low variance = data is tightly packed around mean.

---

### 3. **Standard Deviation (SD)**
The square root of variance. Gives dispersion in the same units as original data.

$$
\sigma = \sqrt{\frac{1}{N} \sum_{i=1}^{N} (x_i - \mu)^2}
$$

> If SD is small, your data is tightly packed.

---

## Skewness (Symmetricity)

Skewness tells you whether your data is **symmetrical**, **left-skewed**, or **right-skewed**.

- **Symmetric**: Mean ≈ Median ≈ Mode  
- **Right-skewed**: Mean > Median > Mode  
- **Left-skewed**: Mean < Median < Mode

> Skewed data has long "tails" on one side.

---

## Covariance & Correlation

### 1. **Covariance**
Tells us whether two variables move together.

- Positive: both increase or decrease together.
- Negative: one increases, the other decreases.

Formula:  
$$
\text{Cov}(X, Y) = \frac{1}{n} \sum_{i=1}^{n}(x_i - \bar{x})(y_i - \bar{y})
$$

> Units are hard to interpret, so we use correlation.

---

### 2. **Correlation**
Standardized covariance → ranges between -1 to +1.

Pearson Correlation Coefficient:  
$$
r = \frac{\text{Cov}(X,Y)}{\sigma_X \cdot \sigma_Y}
$$

- **r = 1** → perfect positive
- **r = -1** → perfect negative
- **r = 0** → no linear relationship

> Helps us understand strength and direction of a relationship.

---
