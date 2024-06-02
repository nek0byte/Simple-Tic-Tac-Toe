# 🎮 Console Based Tic Tac Toe

This is **Console Based Tic Tac Toe** a classic game where two players take turns marking spaces in a 3x3 grid.

You can play this in your console, try it out🐱 

## 📋 Table of Contents
- [Features](#features)
- [Getting Started](#getting-started)
- [How to Play](#how-to-play)
- [Code Structure](#code-structure)
  
## ✨ Features
- 👾 **Two-player mode:** Player 1 (X) and Player 2 (O)
- 🕹️ **Automatic win and draw detection**
- 🎲 **Invalid move handling**
- ♻️ **Option to replay multiple rounds**

## 🚀 Getting Started

### Prerequisites
- A C++ compiler (e.g., g++)
- A terminal or command prompt

### Installation
1. **Clone the repository:**
   ```sh
   git clone https://github.com/kuuronekoo/tictactoe.git
   cd tictactoe
   ```

2. **Compile the game:**
   ```sh
   g++ tictactoe.cpp -o tictactoe
   ```

3. **Run the game:**
   ```sh
   ./tictactoe
   ```

## 🎮 How to Play
1. The game will instruct **Player 1** to make the first move.
2. Enter the number corresponding to the cell where you want to place your mark (X or O).
3. Players take turns until one wins or the game is a draw.
4. At the end of each game, you will be asked if you want to play again. Enter `y` or `Y` to play another round.

## 🛠️ Code Structure
- **`display()`:** Displays the current state of the game board in a retro console style.
- **`player_turn()`:** Manages each player's turn and ensures valid moves.
- **`is_winner()`:** Checks for a winning condition.
- **`is_draw()`:** Checks for a draw condition.
- **`gameover()`:** Determines if the game has ended.
- **`resetBoard()`:** Resets the game board for a new match.
