# Day 15 - NLP: Text Classification in PyTorch

## Project: Sentiment Classification of Virgin America Airline Tweets

### Objective
Build a binary text classifier using PyTorch to classify tweets as **positive** or **negative** based on customer sentiment towards **Virgin America**.

---

### Dataset:
- Source: [American Airline Tweet](https://lazyprogrammer.me/course_files/AirlineTweets.csv)
- Contains labeled text samples: `positive` or `negative`.

---

## Model Architecture

- **Embedding Layer** – Converts tokens to dense vectors
- **Fully Connected (Linear) Layer**
- **Sigmoid Activation** – Outputs probability between 0 and 1

---

## Training Pipeline

1. **Data Preprocessing**:
   - Lowercasing
   - Removing punctuation
   - Tokenization
   - Padding to max sequence length

2. **Token Indexing**:
   - Custom vocabulary
   - Mapped all words to integers

3. **Model Training**:
   - Binary cross-entropy loss
   - Accuracy as evaluation metric

---

## Model Performance

| Metric          | Value    |
|-----------------|----------|
| Train Loss      | ~0.62    |
| Train Accuracy  | ~26.18%  |
| Valid Loss      | 0.65     |
| Valid Accuracy  | ~25.43%  |

---

## Sample Predictions

| Tweet (Truncated)                        | Actual | Predicted |
|-----------------------------------------|--------|-----------|
| "Love flying with @VirginAmerica..."    | 1      |    1       |
| "Missed my flight. Bad experience..."   | 0      |    0       |

---

## Libraries Used

- `PyTorch`
- `Pandas`
- `NumPy`
- `Scikit-learn`

---
