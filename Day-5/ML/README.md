# Brain Tumor Classification with Custom CNN

This project implements a **Convolutional Neural Network (CNN)** from scratch in PyTorch to classify MRI images for brain tumor detection. The entire pipeline, including data loading, model definition, training, and evaluation, was written manually without high-level wrappers.

---

## Project Overview

- **Objective:** Classify MRI images as tumor or non-tumor.
- **Framework:** PyTorch
- **Main Steps:**
  - Custom Dataset and DataLoader setup
  - CNN model definition
  - Training & evaluation loops
  - Accuracy reporting

---

## Model Architecture

The CNN includes:

- Convolutional layers
- ReLU activations
- MaxPooling layers
- Fully connected layers
- Softmax classifier

**Architecture:**

<pre> ``` Conv2D -> ReLU -> MaxPool2D -> Conv2D -> ReLU -> MaxPool2D -> Flatten -> Linear -> ReLU -> Linear -> Softmax ``` </pre>


---

## Pipeline Components

**Data Preparation**
- Loaded custom MRI image dataset
- Applied transforms and normalization
- Batching via DataLoader

**Model**
- Defined using `nn.Module`
- Manual `forward()` implementation

**Training Loop**
- Forward pass
- Loss computation (CrossEntropyLoss)
- Backpropagation and optimizer step (Adam)
- Epoch-wise accuracy tracking

**Evaluation**
- Switched model to evaluation mode
- Computed validation metrics

---

## Loss & Optimization

- **Loss Function:** CrossEntropyLoss
- **Optimizer:** Adam
- **Learning Rate:** 0.001

---

## Results

## Model Performance

The model was trained over 20 epochs, showing steady improvement in accuracy and loss.

| Epoch | Train Accuracy | Train Loss | Test Accuracy | Test Loss |
|-------|----------------|------------|---------------|-----------|
| 1     | 40.54%         | 1.2712     | 55.04%        | 1.0251    |
| 5     | 79.23%         | 0.5678     | 75.50%        | 0.6110    |
| 10    | 83.12%         | 0.4715     | 78.32%        | 0.6214    |
| 15    | 85.13%         | 0.4210     | 81.66%        | 0.5031    |
| 20    | 87.43%         | 0.3678     | 82.16%        | 0.4720    |

**Final Test Accuracy:** ~82.16%

---

## How to Run

1. Install dependencies:
<pre> ``` pip install torch torchvision ``` </pre>


2. Run the script:
<pre> ``` python brain_tumor_cnn.py ``` </pre>


---

## Learning Highlights

- Practiced defining CNNs in PyTorch from scratch.
- Built a full training loop manually.
- Understood image classification workflow end-to-end.

---

**Status:** Completed CNN implementation and initial training run.
