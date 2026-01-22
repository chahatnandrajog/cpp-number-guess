# C++ Number Guessing Game

A simple command-line number guessing game written in C++.  
The program randomly generates a number between 1 and 100, and the user keeps guessing until they get it right.

This project demonstrates random number generation, loops, and user input handling in C++.

---

## Features

- Randomly generates a number between 1 and 100  
- Provides feedback: "Too High!" or "Too Low!"  
- Continues until the correct number is guessed  
- Option to replay after each round  
- Uses current time as random seed for true randomness  

---

## Technologies Used

- C++  
- Standard Library (`<iostream>`, `<cstdlib>`, `<ctime>`)  

---

## How It Works

1. The program seeds the random number generator using the current time.  
2. A random number between 1 and 100 is generated.  
3. The user repeatedly enters guesses.  
4. The program compares the guess to the target number and gives hints.  
5. When guessed correctly, the user can choose to play again.

---

## How to Run

### Requirements
- A C++ compiler (g++ or clang)

### Compile

g++ guessing_game.cpp -o game

### Run

./game

---

## Sample Gameplay

Enter Guess (1-100): 50
Too High!
Enter Guess (1-100): 25
Too Low!
Enter Guess (1-100): 32
Congratulations! You guessed the number!
Do you want to play again? (yes/no): n

---

## Project Structure

guessing_game.cpp
README.md

---

## Future Improvements

- Limit number of guesses and show score  
- Difficulty levels (easy/medium/hard)  
- Input validation for non-numeric entries  
- Track best score across rounds  
