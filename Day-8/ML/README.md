# Day-8: Poetry Generator using Language Model (NLP)

## Project Overview

This project is a **Poetry Generator** built from scratch using a character-level **Language Model (LM)** in PyTorch. It was trained on a small corpus of Hindi poetry and is capable of generating meaningful poetic sequences.

---

## Core Concepts Used

- **Character-level Tokenization**
- **One-hot Encoding & Mapping**
- **Custom Dataset & DataLoader**
- **Simple RNN (Single Linear Layer for prediction)**
- **Training Loop from scratch (no high-level libraries)**
- **Loss calculation using CrossEntropyLoss**
- **Sampling text from a trained model**

---

## Model Architecture

```text
Embedding -> Linear -> Logits (Vocabulary Size)
