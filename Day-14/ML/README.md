# Day 14 - NLP: Topic Modeling

## 1. LDA (Latent Dirichlet Allocation)

- **Concept**: Probabilistic topic model where each document is a mixture of topics and each topic is a distribution over words.
- **Steps**:
  - Clean and preprocess the text.
  - Create dictionary and corpus.
  - Apply LDA using `gensim.models.LdaModel`.
  - Visualize topics with pyLDAvis.

- **Use Case**: Understand latent semantic structure in documents.

---

## 2. LSA (Latent Semantic Analysis)

- **Concept**: Matrix factorization technique using **Truncated SVD** to reduce high-dimensional text into topic space.
- **Steps**:
  - TF-IDF Vectorization
  - Apply TruncatedSVD
  - Map documents and terms to latent topics

- **Use Case**: Dimensionality reduction and topic extraction in text datasets.

---

## 3. NMF (Non-negative Matrix Factorization)

- **Concept**: Factorizes TF-IDF matrix into two lower-rank non-negative matrices representing documents and topics.
- **Steps**:
  - Clean and vectorize the text (TF-IDF).
  - Fit NMF using `sklearn.decomposition.NMF`.
  - Interpret the top keywords in each topic.

- **Strength**: Provides easily interpretable topics due to non-negativity constraints.

---

## Comparison Summary

| Method | Type | Advantage | Limitation |
|--------|------|-----------|------------|
| LDA | Probabilistic | Interpretable topic distribution | Assumes Dirichlet prior |
| LSA | Linear Algebra | Fast & simple | Less interpretable |
| NMF | Matrix Factorization | Sparse, interpretable topics | No probabilistic foundation |

