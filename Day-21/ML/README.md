# 🧠 Day 21 – ML Progress: Transformer Decoder from Scratch 🚀

## ✅ Project: Transformer Decoder (from scratch using PyTorch)

### 🔧 What Was Implemented:
- Complete Transformer Decoder architecture including:
  - Token embeddings
  - Positional encoding
  - Masked multi-head self-attention
  - Layer normalization
  - Residual connections
  - Feed-forward neural network (FFN)
  - Final linear + softmax output layer

### 📈 Training:
- Trained on a character-level language modeling task
- Total training steps: **5000**
- Optimizer: Adam
- Learning rate: 1e-3

### 📉 Loss Progress:
- The training loss decreased **steadily across 5000 steps**, showing proper convergence and learning.
- Initial loss: ~4.3
- Final loss (after 5000 steps): **~2.1**
- Shows that the decoder-only model is capable of generating coherent character sequences

### 🔬 Key Observations:
- The model generates increasingly sensible text as training progresses
- Positional encodings and residuals help stabilize training
- LayerNorm + attention masking critical for meaningful convergence

### 📁 Files:
- `Transformer Decoder.ipynb`: Code and results of full training
