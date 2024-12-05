# X-O Game (Tic-Tac-Toe) 

## Overview
This project is a simple console-based **Tic-Tac-Toe** (X-O) game implemented in C++. It allows two players to take turns and try to get three of their marks ('x' or 'o') in a row, either horizontally, vertically, or diagonally. The game will notify the players when a winner is found or if the game ends in a draw.

---

## Features
- **Two-player gameplay**: Players take turns marking their moves on a 3x3 grid.
- **Dynamic grid update**: The grid is refreshed after each move, providing an updated view of the game state.
- **Win condition detection**: The game checks after each move to see if any player has won.
- **Draw detection**: If all positions are filled and no winner is found, the game will declare a draw.
- **Clear console display**: The game screen is cleared after every move for a cleaner user experience.

---

## How to Play
1. **Start the Game**: Run the program to begin the game.
2. **Grid Representation**: The grid starts with numbers representing each position (1-9). Players will enter the number of the position they want to mark.
3. **Turns**: Player 1 uses 'x', and Player 2 uses 'o'. They alternate marking positions on the grid.
4. **Winning**: A player wins if they place three of their marks in a row, either horizontally, vertically, or diagonally.
5. **Draw**: If the grid is filled and no player has won, the game will declare a draw.

---

## Game Flow
1. The initial game grid will display numbers from 1 to 9.
2. Players will be prompted to enter the number of the position where they want to place their mark.
3. After each move, the grid is updated and displayed again with the current game state.
4. The game will check for a winner after every move. If a player wins or if there is a draw, the game will end.

---

## Code Explanation

### `print()` Function
- Clears the console screen and displays the updated grid.

### `change()` Function
- Prompts the current player to choose a position on the grid and updates the grid with the player's mark ('x' or 'o').
- Switches the turn to the other player using `swap(player1, player2)`.

### `checkwinner()` Function
- Checks for any winning condition: three marks in a row, column, or diagonal.
- If all positions are filled without a winner, the function returns 'y' for a draw.
- Returns 'x' or 'o' if either player wins, otherwise returns 'c' (continue playing).

