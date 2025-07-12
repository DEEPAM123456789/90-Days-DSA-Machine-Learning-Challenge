# Day-3: TF-IDF and Basic Movie Recommender

Today I continued my NLP journey by learning about **TF-IDF** (Term Frequency-Inverse Document Frequency) and applied it to build a **simple movie recommendation system**.

---

## What I Learned

- **TF-IDF Vectorizer**
  - Used scikit-learn’s `TfidfVectorizer` to convert text data (movie overviews) into numerical feature vectors.
  - Understood how TF-IDF gives higher weight to words that are important (frequent in a document but rare across all documents).

- **Cosine Similarity**
  - Calculated similarity between movie descriptions.
  - Movies with higher cosine similarity scores are considered more similar.

- **Recommendation Logic**
  - For any given movie, sorted similarity scores to retrieve the top 5 most similar movies.
  - Displayed recommendations with their titles and similarity scores.

- **Text Preprocessing**
  - Cleaned and prepared the text before vectorization.

---

## Key Libraries Used

- `pandas`
- `scikit-learn`
  - `TfidfVectorizer`
  - `cosine_similarity`
- `numpy`

---

## Results

- Successfully generated movie recommendations based on textual similarity.
- Observed that the recommender can capture thematic similarity by comparing TF-IDF vectors.

---

## Next Steps

- Experiment with **CountVectorizer** and compare results with TF-IDF.
- Try more advanced embeddings like **Word2Vec** or **transformer-based embeddings**.
- Improve the preprocessing (stemming, lemmatization, stopword removal).

---

## How to Run

1. Install dependencies:
   ```bash
   pip install pandas scikit-learn numpy
