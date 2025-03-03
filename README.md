# Lottery-RNG-System
A probability-based lottery system using Random Number Generation (RNG) and Monte Carlo simulations to ensure fairness and unpredictability.
# 🎰 Lottery RNG System - Probability & Fairness Analysis

## 📌 Overview
This project implements a **secure lottery system** using **Random Number Generation (RNG) and Monte Carlo simulations** to ensure **fairness and unpredictability**.

- The **C++ program (`lottery_rng.cpp`)** generates **secure random lottery numbers**.
- The **C++ program (`monte_carlo_sim.cpp`)** runs **10,000 simulations** to test the **probability distribution**.
- Uses **Monte Carlo methods** to analyze if all numbers have **equal probability**.

## ⚡ Features
✔ **Secure Random Number Generation (RNG)** using `std::mt19937` (Mersenne Twister).  
✔ **Monte Carlo Simulation** to verify the fairness of the number draw.  
✔ **Fully customizable**: Change the **number range, draw size, and simulation count**.  

## 📂 Project Structure
Lottery-RNG-System/
│── src/
│   ├── lottery_rng.cpp        # C++ RNG-based lottery system
│   ├── monte_carlo_sim.cpp    #  C++ Monte Carlo analysis
│   
│── results/
│   ├── simulation_results.png # Monte Carlo simulation graph
│── README.md                  # Project Overview & Explanation
│── LICENSE                    # Open-source License



## 🎲 How to Run the Project

### 1️⃣ **Run the Lottery RNG System (C++)**
```sh
g++ -o lottery lottery_rng.cpp
./lottery

g++ -o lottery_sim monte_carlo_sim.cpp
./lottery_sim




