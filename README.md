# Alloy Design Optimizer – C Project

A C-based matrix math project to determine the **optimal composition of an alloy** based on user-selected **metal properties** and **elements**. This simulation demonstrates how material science and mathematical modeling can be fused using fundamental programming concepts.

---

## What It Does

- Lets the user:
  - Select **3 physical properties** (like Ductility, Strength, etc.)
  - Choose **3 base metals** (from a set of 7)
  - Input contribution values for each metal-property pair
- Constructs a 3×3 matrix of property contributions
- Solves a **characteristic cubic equation**
- Outputs the percentage composition for each metal in the alloy

If the contributions lead to an incompatible system (e.g., imaginary roots), it gracefully notifies the user.

---

## Key Concepts Used

- Matrix Math & Determinants
- Characteristic Polynomial of a Matrix
- Cubic Equation Solving using Discriminant Logic (Cardano’s Method)
- String & Array Manipulation in C

---

## Tech Stack

- Language: **C**
- Libraries: `stdio.h`, `string.h`, `math.h`
- Compiler: GCC (`-lm` flag needed for math)

---

## Sample Input/Output

```bash
# Terminal Interaction

Select any three properties you want to deal with for your Alloy
1 Thermal Conductivity
2 Electrical Conductivity
...

Select any three metals you want to create your Alloy
1 Iron
2 Copper
...

What is the contribution of metal Iron for property Strength?
-> 0.6

...

The alloy composition is:
0.34500 of Iron
0.45500 of Nickel
0.20000 of Zinc
```

## How to Run

```bash
gcc alloydesign.c -o alloy -lm./alloy
```

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

## 👨‍💻 Author

**Akhilesh Kancharla**  
B.Tech CSE @ MGIT (Class of 2028)  
Project-Driven Learner | C • Python • Data Science  
📎 [LinkedIn](www.linkedin.com/in/akhilesh-kancharla-63b5b6327) • 🌐 [GitHub](https://github.com/akhilesh-kancharla)
