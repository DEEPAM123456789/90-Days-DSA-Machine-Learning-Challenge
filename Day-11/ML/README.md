# Spam Detection using NLP

This project implements a **Spam Detection** system using Natural Language Processing (NLP) techniques. The model classifies SMS messages as either **Spam** or **Ham (Not Spam)**.

---

## Techniques Used

- **Text Preprocessing** (lowercasing, punctuation removal, stemming)
- **Bag of Words (BoW)**
- **TF-IDF Vectorization**
- **Label Encoding**
- **Multinomial Naive Bayes Classifier**
- **Pipeline (using `scikit-learn`)**

---

## Dataset

- File: `spam.csv`
- Format: SMS messages with labels (`spam` or `ham`)

---

## Workflow

1. **Preprocessing**:
   - Lowercased all text
   - Removed punctuation
   - Performed stemming using PorterStemmer

2. **Feature Engineering**:
   - Used `CountVectorizer` and `TfidfVectorizer` for converting text to numeric vectors

3. **Model Training**:
   - Used `MultinomialNB` classifier
   - Built a pipeline combining TF-IDF vectorizer and the Naive Bayes model

---

## Results

| Vectorizer       | Accuracy | Precision | Recall | F1-Score |
|------------------|----------|-----------|--------|----------|
| CountVectorizer  | 98.25%   | 100%      | 94%    | 97%      |
| TF-IDF Vectorizer| 96.30%   | 85%       | 89%    | 87%      |

- CountVectorizer performed better for this dataset.
- TF-IDF slightly underperformed, possibly due to how rare terms are down-weighted.

---

## How to Run

```bash
pip install pandas scikit-learn nltk
python spam_detector.py
