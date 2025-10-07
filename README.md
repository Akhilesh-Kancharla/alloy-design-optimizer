# Alloy Design Optimizer – C Project

A C-based command-line tool to determine the **optimal composition of an alloy** based on user-selected **metal properties** and **elements**. This project demonstrates how material science and mathematical modeling can be fused using fundamental programming concepts.

---

## What It Does

This program models a simplified alloy design process:

1.  **Select Properties & Metals**: The user chooses 3 physical properties (e.g., Strength, Density) and 3 base metals (e.g., Iron, Copper).
2.  **Input Contributions**: For each metal-property pair, the user provides a numeric value representing the metal's contribution to that property.
3.  **Calculate Composition**: The program constructs a 3x3 matrix from these values and solves its characteristic equation to find the eigenvalues.
4.  **Display Results**: The calculated eigenvalues are interpreted as the percentage composition for each metal in the final alloy.

If the contributions lead to an incompatible system (e.g., imaginary roots), it gracefully notifies the user.

---

## Key Concepts Used

- Matrix Math & Determinants
- Characteristic Polynomial of a Matrix
- Cubic Equation Solving using Discriminant Logic (Cardano’s Method)
- User Input Handling in C

---

## Tech Stack

- Language: **C**
- Libraries: `stdio.h`, `string.h`, `math.h`
- Compiler: **GCC**

---

## Getting Started

### Prerequisites

You will need a C compiler, such as GCC, installed on your system.

### Build and Run

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/akhilesh-kancharla/alloy-design-optimizer.git
    cd alloy-design-optimizer
    ```

2.  **Compile the program:**
    Use GCC to compile the source file. The `-lm` flag is required to link the math library.
    ```bash
    gcc alloydesign.c -o alloydesign -lm
    ```

3.  **Run the executable:**
    ```bash
    ./alloydesign
    ```

---

## Sample Usage

```bash
Select any three properties you want to deal with for your Alloy
1 Thermal Conductivity
2 Strength
3 Hardness
1 2 3
---------------------------------------------------------------------
Select any three metals you want to create your Alloy
1 Iron
2 Copper
3 Nickel
1 2 3
---------------------------------------------------------------------
What is the contribution of metal Iron for property Strength?
> 0.5
What is the contribution of metal Iron for property Hardness?
> 0.2
What is the contribution of metal Iron for property Thermal Conductivity?
> 0.1
What is the contribution of metal Copper for property Strength?
> 0.2
What is the contribution of metal Copper for property Hardness?
> 0.3
What is the contribution of metal Copper for property Thermal Conductivity?
> 0.9
What is the contribution of metal Nickel for property Strength?
> 0.8
What is the contribution of metal Nickel for property Hardness?
> 0.6
What is the contribution of metal Nickel for property Thermal Conductivity?
> 0.4
---------------------------------------------------------------------
The alloy composition is:
1.00000 of Iron metal
0.50000 of Copper metal
0.20000 of Nickel metal
```

## How to Run

```bash
gcc alloydesign.c
```

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

## 👨‍💻 Author

**Akhilesh Kancharla**  
B.Tech CSE @ MGIT (Class of 2028)  
Project-Driven Learner | C • Python • Data Science  
📎 [LinkedIn](www.linkedin.com/in/akhilesh-kancharla-63b5b6327) • 🌐 [GitHub](https://github.com/akhilesh-kancharla)
