# Day-18 ML Work

## Transformers – Theoretical Study (Self-Attention Internals)

---

### Scaled Dot Product Attention (Why 1/√dk?)

In scaled dot product attention, we perform a dot product between the Query and Key vectors. But as the dimensionality `dk` increases, the magnitude of the dot product also increases, leading to high variance. High variance leads to sharp softmax outputs → unstable gradients.

Example:
If we have a vector like `[10, 20, 30, 40]`, the variance is high. Dividing it by a constant (say 10) significantly reduces variance. So instead of reducing dimensions (which loses semantic information), we **scale the dot product down** using `1/√dk`.

This keeps the variance low and gradients stable without damaging the information embedded in the vector.

---

### Multi-Head Attention

A single self-attention head can’t always understand all possible meanings in a sentence.  
Example sentence:  
`"A man saw an astronomer with a telescope"`  
It has two interpretations, and one head may latch onto only one.

So, we use **multiple Q/K/V projections (multi-heads)** — each learns a different representation of the sentence. These heads run in parallel, attend to different parts/meanings, and their outputs are **concatenated** and passed through a final linear layer to produce output of original dimensionality.

This allows the model to **understand the sentence from multiple perspectives** simultaneously.

---

### Positional Embeddings

In transformers, we send all words into attention blocks simultaneously. So, unlike RNNs, the model has no sense of word order.  
Sentence like: `"Deepam killed the lion"`  
can be misinterpreted as: `"Lion killed Deepam"`  
→ Changes entire meaning.

#### Failed Solutions:
- Using simple counts (1,2,3,...) = **Unboundedness** → high numbers dominate training.
- Normalizing counts (0 to 1) = **Discrete & relative positions lost** → gradient instability + loss of relative positioning.

#### Solution: Sinusoidal Positional Encoding

We use **sin and cos functions** in pairs to encode positions. They:
- Are bounded and continuous
- Provide relative position information
- Are unique for each position
- Keep gradients stable

The **positional encoding vector has the same dimension** as word embedding. We **add it element-wise** to the embedding and then pass it through attention blocks.

Bonus Insight:
There exists a theoretical matrix that can linearly transform a word vector at one position into another (like moving a fixed delta forward in a sentence). This gives the model a sense of relative offset between words.

---