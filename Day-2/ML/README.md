# Day 2 – MNIST Digit Classification with PyTorch

**Date:** 11 July 2025

Hello Guys, today, I practiced implementing deep learning models from scratch in PyTorch to classify handwritten digits using the MNIST dataset.

---

## Topics Covered

- Artificial Neural Networks (ANN)
- Convolutional Neural Networks (CNN)
- Model training and evaluation
- Accuracy measurement
- Confusion Matrix visualization

---

## Models Built

### Artificial Neural Network (ANN)

- **Architecture:**
  - Input: Flattened 28×28 pixels (784 features)
  - Hidden Layer: Linear + ReLU
  - Output Layer: 10 classes
- **Training:**
  - Optimizer: Adam
  - Loss: CrossEntropyLoss
  - Epochs: 5
- **Result:**
  - Test Accuracy: ~97.84%

---

### Convolutional Neural Network (CNN)

- **Architecture:**
  - Conv2D Layer 1: 1 input channel → 10 output channels
  - ReLU Activation
  - Conv2D Layer 2: 10 → 10 output channels
  - ReLU Activation
  - Flatten
  - Fully Connected Layer
  - Output: 10 classes
- **Training:**
  - Optimizer: Adam
  - Loss: CrossEntropyLoss
  - Epochs: 5
- **Result:**
  - Test Accuracy: ~98%

---

## Libraries Used

- PyTorch (`torch`, `torchvision`)
- Torchmetrics (for confusion matrix)
- mlxtend (for plotting)

---

## Confusion Matrix

- Generated predictions on the test dataset.
- Plotted the confusion matrix to visualize model performance across all digit classes.

---

## Key Learnings

- Implemented both ANN and CNN architectures manually in PyTorch.
- Understood the training loop structure in PyTorch.
- Learned to evaluate classification models using confusion matrices.

---


