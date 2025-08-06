# Day-27: Generative AI Exploration 

## What I did today:

- Started with **Generative AI** theory and history:
  - What is GenAI?
  - Evolution of GenAI: From rule-based systems to transformers
  - Reinforcement Learning & RLHF (used in fine-tuning ChatGPT)
  - Probabilistic Models for generation
  - Multimodal GenAI (e.g., image to recipe, humming to music)

- Coding Work:
  - Used a GPT model to **generate poetry and music** 

# Introduction to Generative AI (GenAI)

---

## What is Generative AI?

Generative AI refers to systems that can *create* new content — text, images, music, videos, code, and more. Think of it like having a smart robot that can:
- Write poems
- Generate artwork
- Compose music
- Simulate conversations
- Solve code problems

Imagine asking, “Write a song about Delhi rain,” and getting beautiful lyrics with melody. That’s GenAI!

---

## Brief History

- **1950s-80s**: Birth of AI. Rule-based expert systems.
- **1990s-2000s**: Statistical models like HMMs.
- **2014**: Introduction of GANs by Ian Goodfellow — deep neural nets that generate images.
- **2017**: Transformers (paper: *Attention Is All You Need*) — revolutionized GenAI.
- **2018-2023**: GPT-2, GPT-3, DALL·E, ChatGPT, Bard, Claude, etc.
- Now: GenAI is multimodal — generating across text, images, audio, and video.

---

## Reinforcement Learning (Theory)

Reinforcement Learning (RL) is like training a dog.

- Dog performs trick → gets reward = positive reinforcement.
- Similarly, AI agents take actions in an environment to maximize rewards.

In GenAI:
- RL is used in *fine-tuning* models. E.g., **RLHF** (Reinforcement Learning from Human Feedback) in ChatGPT.
- Models are rewarded for being **helpful**, **honest**, and **harmless**.

---

## Probabilistic Models

Before deep learning, AI used probability-based models:
- **Naive Bayes**
- **Hidden Markov Models**
- **Latent Dirichlet Allocation**

In GenAI:
- Probabilities help predict the *next word*, *pixel*, or *note*.
- Example: “I am feeling very ___” → 90% chance: *happy*, 5%: *sad*, 3%: *angry*.

Models generate by sampling based on these probabilities.

---

## Multimodal Generative AI

Multimodal GenAI = Combining multiple types of data (text, image, audio, video) to generate new content.

Example use cases:
- Input: Image of food → Output: Recipe in text.
- Input: Humming → Output: Full music track.
- Input: X-ray → Output: Diagnostic report (text).

Examples of models:
- GPT-4 (with image input)
- Gemini
- Sora by OpenAI (video generation)

---

## Summary

| Concept                 | Use in GenAI                                                |
|------------------------|-------------------------------------------------------------|
| Generative Models      | Create new text, images, code, music                        |
| Reinforcement Learning | Fine-tuning based on reward (human preference)             |
| Probabilistic Models   | Estimate likelihood of next element                        |
| Multimodal Models      | Work with text, image, audio, video inputs                  |


