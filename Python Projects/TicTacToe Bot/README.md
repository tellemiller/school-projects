# Tic-Tac-Toe Bot
This Python script allows a user to play a game of Tic-Tac-Toe against a computer. It also has the functionality to "train" the computer against itself by simulating a specified number of games. The computer will reference these "training games" later to determine moves that have the highest probablity of victory given the current board state. After enough training games, the computer should be incapable of losing, only draw or win.
## Functions
- **beginGame():** Allows the player to play a game against the CPU. The player that gets to move first is randomly chosen.
- **trainCPU():** Requests the number of games to be played and simulates them. These games are recorded and used for reference by the bot to slowly improve.
- **displayData():** Displays all of the games played by the computer. Includes information such as winner, winner icon (X or O), and board states for every move.
- **displayFormattedGameData():** Displays all of the games played by the computer. Displays the board states on an ASCII board.
- **selfTrainingMove():** Computer references current board state against all previously encountered board states. If a match is found, the computer verifies the game ended in a win for itself and copies the next recorded board state. 
