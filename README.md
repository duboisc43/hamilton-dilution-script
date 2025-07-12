# hamilton-dilution-script
HSL method for 1:4 dilution on Hamilton Microlab STAR for pre-PCR multiplexing
# HSL Script: 1:4 Sample Dilution for Pre-PCR Multiplexing

This repository contains a Hamilton Scripting Language (HSL) method written for the Microlab STAR liquid handling platform. The script performs a 1:4 dilution of samples across a 96-well plate layout, intended for pre-PCR multiplex preparation.

---

## 💡 Project Overview

This HSL method:

- Transfers 25 µL of each sample from a source plate to a destination plate
- Adds 75 µL of diluent before the sample to ensure accurate mixing
- Mixes the resulting solution 3 times with 50 µL volume
- Uses a fresh tip for each sample
- Tracks source and destination wells across all 96 wells

---

## 🧪 Use Case

Designed for NGS workflows requiring pre-PCR dilutions, especially in multiplexed sample preparation.

---

## 🔧 Script Highlights

- Compatible with Hamilton Microlab STAR / VENUS software
- Clearly structured logic for ease of modification
- Modular format for potential automation scaling

---

## 📁 Files

- `dilution.hsl`: Main HSL script

---

## 🚀 How to Use

1. Open the script in the VENUS Method Editor.
2. Assign labware positions according to your instrument setup.
3. Run the method after simulating or validating steps.
4. Adjust `DiluentVol` and `SampleVol` variables if different ratios are required.

---

## 📷 Screenshot

_You can add a screenshot here of the VENUS Method Editor or pipetting layout to make it visual._

---

## 📜 License

MIT License (or choose another if applicable).

---

## 👤 Author

Collin Dubois  
Email: collin.dubois@gmail.
