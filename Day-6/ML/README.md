# Day-6: Word Embeddings and Markov Model Theory

Today I focused on:
- Implementing **Word Embeddings** using Word2Vec in Python.
- Studying the theoretical foundations of **Markov Models** for sequence modeling.

---

## Word Embeddings with Word2Vec

**Objective:** Learn how to transform text into dense vector representations that capture semantic similarity.

**Steps Implemented:**
- Preprocessed a sample text corpus.
- Tokenized sentences.
- Trained a Word2Vec model using `gensim`.
- Extracted word vectors.
- Explored vector similarity (e.g., most similar words to a given token).

**Libraries Used:**
- `gensim`
- `nltk`

**Key Takeaways:**
- Word2Vec learns embeddings by predicting context words.
- The learned vectors can be used for similarity calculations, clustering, or as input to neural networks.

---

## Markov Model Theory

In addition to coding, I studied **Markov Models**, which are foundational probabilistic models for sequential data.

---

### What is a Markov Model?

**Markov Model** is a stochastic model describing a sequence of possible events where the probability of each event depends *only* on the previous state (the **Markov Property**).

**Definition:**
> A process is Markovian if:
> 
> \[
> P(X_{n+1} \mid X_1, X_2, \ldots, X_n) = P(X_{n+1} \mid X_n)
> \]
> 
> That is, the next state depends only on the current state.

---

### Key Components:
- **States:** Possible situations (e.g., words, weather).
- **Transition Probabilities:** Probability of moving from one state to another.
- **Initial Distribution:** Probability distribution over the starting state.

---

### Applications in NLP:
- Part-of-speech tagging.
- Language modeling (n-gram models).
- Sequence prediction.

---

**Note:** This section was studied theoretically without implementation in code.

---

**Status:** Word Embedding implementation completed; Markov Model theory studied and documented.
