# Text Classification using NLP and Machine Learning

This project involves building a basic **Text Classifier** using NLP techniques and a Logistic Regression model in Python. The model is trained to classify given sentences into one of three categories: **business, entertainment, and politics**.

---

## Overview

- **Goal:** Classify text data (short sentences) into categories.
- **Model Used:** Logistic Regression
- **Vectorizer:** CountVectorizer (Bag of Words)
- **Library Used:** scikit-learn

---

## Dataset

A small in-memory dataset with labeled examples like:

| Text                      | Label         |
|---------------------------|---------------|
| "He won the oscar"        | entertainment |
| "Market shares are down"  | business      |
| "PM gave a speech"        | politics      |

---

## Workflow

1. **Data Preparation**
   - Created a small dataset with labeled text.
   - Encoded categorical labels into numbers using `LabelEncoder`.

2. **Text Preprocessing**
   - Applied `CountVectorizer` for feature extraction (Bag of Words model).

3. **Model Building**
   - Trained a **Logistic Regression** classifier using `scikit-learn`.

4. **Prediction**
   - Provided custom input sentences to predict category.
   - Example prediction:
     ```python
     model.predict(vectorizer.transform(["Stocks went up"]))
     ```

---

## Accuracy

| Metric      | Score        |
|-------------|--------------|
| Train Score | 1.00 (100%)  |

> Note: High accuracy is due to the small and simple dataset. In real-world scenarios, more diverse and larger datasets are required.

---

## Sample Output

> Input: "He won an award"
> Predicted class: entertainment
