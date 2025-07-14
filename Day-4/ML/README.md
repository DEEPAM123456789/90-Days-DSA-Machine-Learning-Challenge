# Day-4: TF-IDF From Scratch

Today I implemented **TF-IDF (Term Frequency–Inverse Document Frequency) vectorization manually in Python**, without using scikit-learn.

---

## What is TF-IDF?

TF-IDF is a technique to convert text into numeric vectors by combining:

- **Term Frequency (TF):** Measures how frequently a term occurs in a document.
- **Inverse Document Frequency (IDF):** Measures how unique a term is across all documents.

Formula:

$$
TF\text{-}IDF = TF \times IDF
$$


---

## What I Implemented

**Text Preprocessing**
- Converted text to lowercase
- Removed punctuation

**TF Computation**
- Counted each word’s occurrences per document
- Divided by total number of words in that document

**IDF Computation**
- Counted how many documents each word appears in
- Applied the formula:

$$
IDF = \log\left(\frac{N + 1}{df + 1}\right) + 1
$$

where:
- N = total documents
- df = number of documents containing the term

**TF-IDF Matrix**
- Multiplied TF and IDF for each word
- Stored results in a dictionary of term scores

**Output**
- Printed the TF-IDF vectors for each document

---

## Why Build It From Scratch?

- To understand exactly how `TfidfVectorizer` works internally
- To learn the steps of transforming raw text into numeric features
- To deepen intuition about feature importance weighting in NLP

---

## Key Learnings

- The mechanics of text vectorization
- Importance weighting (rare words have higher value)
- How to build and normalize feature representations

---

## Next Steps

- Normalize TF-IDF vectors to unit length
- Remove stopwords
- Compare with scikit-learn’s `TfidfVectorizer`
- Use TF-IDF vectors in a classification model

---

**Status:** Completed TF-IDF implementation from scratch and verified results.
