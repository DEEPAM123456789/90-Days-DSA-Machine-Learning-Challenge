# Brain Tumor Classification – Gradio Deployment

This project demonstrates the **deployment** of a brain tumor classification model using **Gradio**, a Python library for creating customizable UI components around machine learning models.

## Project Objective

The objective is to classify MRI images into **tumor** or **no tumor** using a CNN (Convolutional Neural Network) and expose the trained model via a simple **Gradio interface** for interactive predictions.

## Deployment Interface

The deployed interface accepts an MRI image as input and predicts the class label using the trained PyTorch model.

### Demo Features:
- Upload an image
- Get prediction instantly
- Visual and user-friendly interface
- Built using: `gr.Interface(fn=predict, inputs=..., outputs=...)`

## Technologies Used

- **Python**
- **PyTorch** – model training and inference
- **Gradio** – UI/UX for deployment

## Model Architecture

The model used for classification (previously trained) consists of:

Conv2D → ReLU → MaxPool2D → Conv2D → ReLU → MaxPool2D → Flatten → Linear → ReLU → Linear → Softmax


> Model details and training were handled in prior work; this README focuses only on the **deployment** via Gradio.

## Installation

```bash
pip install gradio torch torchvision


> Model details and training were handled in prior work; this README focuses only on the **deployment** via Gradio.
