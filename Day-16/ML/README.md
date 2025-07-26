# Day 16 - Transformers Theory (NLP)

This README summarizes the theoretical understanding built so far on foundational concepts of Transformers — including the evolution of LLMs, encoder-decoder architecture, attention mechanisms, and alignment models (Bahdanau & Luong). These concepts were studied and noted manually to build strong intuition before starting coding implementation.

---

## 1. History and Evolution of Large Language Models (LLMs)

### From RNNs to Transformers
- Initially, **RNNs** and **LSTMs** were the backbone of NLP tasks.
- These struggled with **long-range dependencies** and **parallelization** issues.

### Encoder-Decoder Emergence
- Seq2Seq (Encoder-Decoder) architecture allowed better handling of variable-length inputs and outputs, crucial for machine translation and text generation.

### The Attention Revolution
- The **attention mechanism** allowed models to **focus on relevant parts** of the input, dramatically improving translation, summarization, and more.

### Self-Attention & Transformers (2017)
- Introduced in **“Attention is All You Need”**, the Transformer used **self-attention** to allow each word to attend to every other word directly — solving RNN's bottlenecks.

### Transfer Learning Era (2018)
- Pretrained models like **ELMo**, **ULMFiT**, **BERT**, and **GPT** changed the game.
- Models were first pretrained on huge corpora and then fine-tuned on specific tasks.

---

## 2. Encoder-Decoder Architecture (in Depth)

### Concept:
- A **2-part structure**:
  - **Encoder**: Converts the input sequence into a fixed-size context vector.
  - **Decoder**: Uses this vector to generate output sequence (e.g., in another language).

### Intuition:
- Think of the **encoder** as reading a sentence and memorizing its meaning.
- The **decoder** then speaks this meaning in another language.

### Key Challenges:
- Loss of information in fixed-size context vector.
- Solution: Attention mechanism.

---

## 3. Attention Mechanism (Only Covered This, Not Self-Attention Yet)

### Why Attention?
- In traditional Seq2Seq, the encoder compresses all input into one vector.
- **Attention** allows the decoder to look at different parts of the input **dynamically** at each decoding step.

### Intuition:
- Similar to how humans focus on different words when translating.
- At time `t`, the decoder **weighs** input tokens by relevance.
---

## 4. Bahdanau vs. Luong Attention (Alignment Models)

### 🔹 Bahdanau Attention (Additive)
- Proposed in 2015 (pre-Transformer).
- Uses a **feedforward neural net** to compute alignment scores.
- Good for **smaller datasets**, computationally heavier.

### 🔹 Luong Attention (Multiplicative)
- Simpler and faster.
- Uses **dot-product** similarity for alignment.
- More suited for **larger datasets** and used in many Seq2Seq models.

| Feature        | Bahdanau Attention     | Luong Attention        |
|----------------|-------------------------|-------------------------|
| Type           | Additive                | Multiplicative (dot-product) |
| Computation    | Slower but expressive   | Faster and scalable     |
| Usage          | Small data, early NLP   | Scalable NLP tasks      |

---

