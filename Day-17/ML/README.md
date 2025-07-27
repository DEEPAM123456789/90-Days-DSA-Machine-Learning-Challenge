# Day 17 - NLP (Transformers Theory): Self-Attention & "Attention Is All You Need"

## 🔹 1. Why Self-Attention?

Traditional embedding techniques like Word2Vec or GloVe produce **static word vectors**, i.e., the word *"bank"* will always have the same vector regardless of context:

- "The **bank** approved my loan" (finance context)
- "We walked by the river **bank**" (nature context)

To address this, **self-attention** generates **contextualized word embeddings**, where the meaning of a word depends on the other words in the sentence.

---

## 🔹 2. What Is Self-Attention?

Self-attention is a mechanism where **every word in a sentence attends to every other word (including itself)** to compute **task-specific contextual embeddings**.

This is done using three trainable weight matrices:

- **Query (Q)**
- **Key (K)**
- **Value (V)**

These help the model learn *how much attention* to give to other words when encoding the current word.

---

## 🔹 3. Self-Attention: Step-by-Step Intuition

### 🧠 Example:
> Input: `"The river bank was overflowing after the rain"`

Let’s focus on the word “bank”. The goal is to update its embedding so the model understands it refers to **riverbank**, not a financial institution.

---

### 🔄 Step 1: Compute Q, K, V

- Multiply each word's embedding by **Q, K, and V weight matrices** (learnable parameters).
- This gives us **query**, **key**, and **value** vectors for each word.

---

### 🔄 Step 2: Similarity Scores

- For a word's **query vector (Q₁)**, compute **dot products with all key vectors (K₁, K₂, ..., Kₙ)** in the sentence:
  \[
  \text{score} = Q₁ \cdot K₁, Q₁ \cdot K₂, ..., Q₁ \cdot Kₙ
  \]

- Scale the scores:  
  \[
  \text{score}_{scaled} = \frac{QKᵀ}{\sqrt{d_k}}
  \]  
  (This prevents very large gradients.)

---

### 🔄 Step 3: Softmax

- Apply `softmax` to get **attention weights**:
  \[
  \alpha_i = \text{softmax}\left(\frac{QKᵀ}{\sqrt{d_k}}\right)
  \]

These weights represent **how much importance** to give to each word in the sentence.

---

### 🔄 Step 4: Weighted Sum

- Multiply each word’s **value vector** (V) by its attention weight and sum them:
  \[
  \text{Output Vector} = \sum \alpha_i V_i
  \]

This is the **new contextual vector** for the word.

---

## 🔹 4. Why It Works?

Unlike RNNs or LSTMs:
- **No sequential dependency**: All tokens are processed in parallel.
- **Captures long-range dependencies** efficiently.
- **Fully differentiable**: Enables backpropagation and efficient training.

---

## 🔹 5. Output Dimension

The **output vector** has the **same dimensionality** as the input embedding due to the learned **linear transformations** applied after attention.

---

## ✅ Benefits Recap

| Feature                  | Self-Attention                          |
|--------------------------|------------------------------------------|
| Context-Awareness        | ✓ Captures meaning based on surroundings |
| Parallel Computation     | ✓ Unlike RNNs, not sequential             |
| Task-Specific Embedding  | ✓ Learns via backpropagation              |
| Scalability              | ✓ Efficient for large datasets            |

---

## 📘 Final Notes

- Self-Attention is the **core building block** of the **Transformer architecture**, introduced in the paper **“Attention Is All You Need”**.
- It forms the basis of modern LLMs like **BERT**, **GPT**, and others.
- You now understand the full mechanics of how a model computes contextual embeddings using **Q, K, V**, softmax attention, and matrix multiplications.

---

📚 Next Up: Multi-Head Attention, Positional Encoding, and Full Transformer Block!
