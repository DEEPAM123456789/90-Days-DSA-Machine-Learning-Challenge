# Day-13: Sentiment Analysis and Text Summarization using NLP

## Overview

In this project, we explored two important applications of NLP:
1. **Sentiment Analysis** – Classifying text data as positive or negative.
2. **Text Summarization** – Generating concise summaries from large articles using three different approaches:
   - Frequency-based method (Part 1)
   - TextRank algorithm (Part 2)
   - Using libraries like Gensim and Spacy (Part 3)

---

## 1. Sentiment Analysis

### Objective:
To classify movie reviews from the IMDB dataset into **positive** or **negative** sentiments.

### Dataset:
- Source: [American Airline Tweet](https://lazyprogrammer.me/course_files/AirlineTweets.csv)
- Contains labeled text samples: `positive` or `negative`.

### Key Steps:
- Preprocessing:
  - Removed special characters, HTML tags, punctuation.
  - Applied lowercasing, stopword removal.
- Feature Extraction:
  - Used **TF-IDF Vectorizer** for converting text to numerical form.
- Model:
  - Trained **Logistic Regression** on the TF-IDF features and CountVectorizer.
- Evaluation:
  - Accuracy achieved: **Test acc: 91.47%** using CountVectorizer and Logistic Regression.

### Tools Used:
- `scikit-learn`, `nltk`, `pandas`

---

## 2. Text Summarization

We implemented three different techniques to summarize long text documents into concise summaries.

---

### Part 1: Frequency-Based Text Summarization

#### Approach:
- Tokenized the text into words and sentences.
- Removed stopwords and punctuation.
- Calculated word frequencies (normalized).
- Scored sentences based on the frequency of significant words.
- Selected top sentences for summary.

#### Output:
- Generated a summary by selecting the **most informative sentences**.

---

### Part 2: TextRank-Based Text Summarization

#### Approach:
- Preprocessed the text: tokenization, stopword removal.
- Constructed a **similarity matrix** between sentence embeddings.
- Built a graph where each sentence is a node.
- Applied **TextRank algorithm** (inspired by Google’s PageRank).
- Ranked sentences based on graph centrality.

#### Output:
- Extracted top-ranked sentences to form the final summary.

#### Tools Used:
- `nltk`, `sklearn`, `numpy`

---

### Part 3: Text Summarization using Libraries (Gensim & Spacy)

#### Approach 1: Using Gensim's Summarizer
- Directly used `gensim.summarization.summarize()` on cleaned text.
- Although `gensim.summarization.summarize()` didn't work because they have removed this feature from version v4.0+

#### Approach 2: Using Spacy (with TextRank implementation)
- Used Spacy to tokenize and vectorize the text.
- Applied TextRank to extract important sentences.

#### Approach 3: LexRank (via Sumy)
- Implemented using `sumy.summarizers.lex_rank.LexRankSummarizer`

#### Comparison:
- Gensim and LexRank were easy to implement but required tuning for thresholding and sentence length.
- Spacy provided a balance between readability and precision.

#### Tools Used:
- `gensim`, `sumy`, `nltk`

---

## Final Notes

- All models and techniques were implemented using **Python + Jupyter Notebook**.
- Emphasis was given on understanding **both algorithmic and library-based methods**.
- Strong focus on **clean preprocessing**, **clarity in methodology**, and **evaluation of output quality**.

---

