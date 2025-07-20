# Cipher Decryption using Language Modeling and Markov Chains

This project implements a statistical approach to decrypt monoalphabetic substitution ciphers using concepts from language modeling and Markov chains. The goal is to recover the original English text without prior knowledge of the encryption key.

## Problem Statement

Given an encrypted text file (e.g., `moby_dick.txt`) where every letter has been substituted by a fixed permutation of the alphabet, your task is to **decode the text** using a statistical language model. The correct mapping between cipher characters and real English characters is unknown.

---

## Key Concepts Used

- **Unigram and Bigram Probabilities:** Estimate how likely a word or character follows another.
- **Markov Assumption:** The probability of a character depends only on the previous character.
- **Transition Matrix:** Built from a large English corpus (`moby_dick.txt`) to model bigram probabilities.
- **Probability Scoring:** Evaluate how likely a decrypted sentence is based on transition probabilities.
- **Random Swapping + Hill Climbing:** Start with a random character mapping and gradually improve it using probability scores.

---

## Methodology

1. **Data Preprocessing:**
   - Load English text from `moby_dick.txt`.
   - Count occurrences of single characters and character pairs (bigrams).
   - Build probability transition matrices using add-1 smoothing.

2. **Encryption Step (Simulated):**
   - A known permutation of the alphabet is used to encrypt plaintext into cipher text.

3. **Decryption:**
   - Begin with a **random key mapping**.
   - Use a **scoring function** to evaluate how good a decryption is using bigram probabilities.
   - Iteratively improve the key using **hill climbing** (swap two characters in the key to get a better score).
   - Continue until convergence or a maximum number of iterations is reached.
