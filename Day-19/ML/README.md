# 🧠 Transformer Architecture – Study Summary (Day-18)

Today, I completed the detailed theoretical study of Transformer Architecture including Encoder, Masked Self-Attention, Cross-Attention, Decoder Architecture, and Decoder Inference.

---

## ✅ 1. Encoder Architecture

- Each encoder block consists of:
  - Multi-Head Self-Attention (MHA)
  - Add & LayerNorm
  - Feed Forward Neural Network (FFN)
  - Add & LayerNorm
- The encoder captures contextual embeddings of the input sentence using self-attention.
- Each token attends to every other token in the sentence.
- **Residual connections** help preserve gradients and prevent vanishing.
- **Positional encoding** is added to token embeddings to inject order information.

---

## ✅ 2. Masked Self-Attention (Decoder Only)

- Used in the first MHA block of each decoder layer.
- Prevents a word from attending to future tokens during training/inference.
- Achieved by applying a mask to the attention score matrix: future tokens get `-∞`, which becomes `0` after softmax.
- Ensures **auto-regressive** behavior — predictions for word *t* depend only on words `1...t-1`.

---

## ✅ 3. Cross-Attention

- Used in the second MHA block in the decoder.
- **Query** comes from the output of the masked self-attention block.
- **Key** and **Value** come from the encoder's output.
- Helps the decoder align its outputs with relevant input tokens from the encoder.
- Crucial for tasks like translation — enables focus on relevant source words.

---

## ✅ 4. Decoder Architecture

- Consists of:
  - Masked Multi-Head Self-Attention (with causal mask)
  - Cross-Attention (uses encoder's output)
  - Feed Forward Neural Network
  - Residual connections + LayerNorm after each block
- **Training Mode:** All inputs are processed at once (non-autoregressive).
- **Inference Mode:** Output is generated one word at a time (autoregressive), feeding previous outputs to predict the next word.
- Final output passes through a linear layer + softmax to predict the next token.

---

## ✅ 5. Feed Forward Network (FFN) – Why It’s Needed?

- Applied independently to each token’s representation.
- Adds **non-linearity** after attention layers.
- Helps model **complex transformations** and **semantic depth**.
- Typically a two-layer network:  
  `FFN(x) = max(0, xW1 + b1)W2 + b2`

---