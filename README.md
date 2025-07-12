# 1:4 Sample Dilution Logic – C++ Simulation

This project simulates a 1:4 dilution process across a 96-well plate, typically performed on a Hamilton Microlab STAR liquid handling robot. The logic was originally developed in HSL (Hamilton Scripting Language) and ported to C++ for demonstration and educational purposes.

---

## 💡 Purpose

This simulation models a common pre-PCR multiplexing protocol:
- Add 75 µL of diluent to each well of the destination plate
- Add 25 µL of sample from the source plate
- Mix 3 times with 50 µL
- One tip per well

It helps demonstrate how liquid handling automation logic can be expressed programmatically.

---

## 🧪 Technologies

- **Language:** C++
- **IDE:** Visual Studio (or any C++ compiler)

---

## 🚀 How to Run

1. Clone or download this repository.
2. Open `Dilution1to4C++.cpp` in your IDE.
3. Compile and run the program.
4. The output will simulate each step of the dilution protocol to the console.

---

## 📄 File

- `Dilution1to4C++.cpp` — C++ source file simulating a full 96-well pipetting procedure

---

## 🧬 Original Use Case

This logic was designed to support high-throughput sample preparation for next-generation sequencing (NGS) pipelines, where accurate dilutions are critical before PCR amplification steps.

---

## 👤 Author

**Collin Dubois**  
Email: collin.dubois@gmail.com  
GitHub: [github.com/yourusername](https://github.com/yourusername)  
LinkedIn: [linkedin.com/in/yourname](https://www.linkedin.com/in/yourname)

