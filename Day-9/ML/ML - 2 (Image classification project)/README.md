# MRI Brain Tumor Classification with Deep Learning

This project focuses on classifying brain MRI scans to detect the presence of tumors using Convolutional Neural Networks (CNNs) and transfer learning with state-of-the-art models like ResNet50 and EfficientNetB0.

---

## Dataset

The dataset contains MRI brain images categorized into different classes based on tumor type. Images were preprocessed through:
- Resizing to 64×64 pixels
- Normalization to [0, 1]
- Conversion to PyTorch tensors

---

## Models Used

### CustomCNN (v1 & v2)
- Built from scratch using PyTorch
- `CustomCNN v2` includes `BatchNorm` and `Dropout` for better regularization

### ResNet50 (Transfer Learning)
- Loaded with pretrained ImageNet weights
- Replaced the final fully-connected layer with a custom head
- Feature extractor frozen for fine-tuning

### EfficientNetB0 (Transfer Learning)
- Lightweight, high-accuracy pretrained model
- Custom classification head for tumor prediction

---

## Training Details
- Loss Function: `CrossEntropyLoss`
- Optimizer: `Adam`
- Epochs: 20
- Metrics: Accuracy, Precision, Recall, F1-Score
- Used `train_dataloader`, `valid_dataloader`, and `test_dataloader` for training pipeline

---

## Model Performance Comparison

| Model            | Accuracy | Precision | Recall | F1 Score |
|------------------|----------|-----------|--------|----------|
| **CustomCNN v1** | 81.67%   | 81.84%    | 81.67% | 81.73%   |
| **CustomCNN v2** | 81.08%   | 81.66%    | 81.08% | 80.28%   |
| **ResNet50**     | 81.11%   | 82.66%    | 81.08% | 81.28%   |
| **EfficientNetB0**| 81.18%  | 81.66%    | 81.11% | 81.78%   |

All models perform comparably, with **CustomCNN v1** achieving the **highest test accuracy and F1 Score**.

---

## Evaluation

- Plotted **train/test loss & accuracy curves**
- Computed **confusion matrix** and classification reports
- Created a custom prediction + plotting function:
  - Randomly samples 5 test images
  - Displays predicted class and confidence
  - Shows green title if prediction is correct, red if incorrect

---

---

## Final Conclusion

Even though pretrained models like **ResNet50** and **EfficientNetB0** are known for their powerful feature extraction capabilities, in this project they performed **similarly or slightly worse than the custom-built CNN**. This highlights a few key insights:

- **CustomCNN v1** achieved the best performance despite being relatively simple, which shows that **well-regularized models can be competitive on small or domain-specific datasets**.
  
- **Transfer learning helped reduce overfitting slightly**, but it did **not boost test accuracy**, possibly due to the nature of MRI data being quite different from natural images used for pretraining (e.g., ImageNet).
  
- This project demonstrates that **deep learning models must be chosen based on data domain**, and that **custom architectures can outperform pretrained ones when properly tuned**.

