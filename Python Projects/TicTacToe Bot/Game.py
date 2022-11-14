import random

freshBoardState = ['1', '2', '3', '4', '5', '6', '7', '8', '9']
previousGames = []
currentGame = []
boardState = freshBoardState
cpuChar = ""

def displayData():
    if len(previousGames) == 0:
        print("No previous games recorded!")
        return

    for i in range(len(previousGames)):
        print(previousGames[i])
    print()

def generateFirstPlayer():
    global cpuChar
    if random.randint(0, 1) == 1:
        cpuChar = 'O'
        return 'X'
    else:
        cpuChar = 'X'
        return 'O'

def printBoard():
    print()
    counter = 0
    for i in range(1, 6):
        if i % 2 == 0:
            print("---|---|---")
        else:
            print(" " + boardState[counter] + " | " + boardState[counter + 1] + " | " + boardState[counter + 2])
            counter += 3

def generateCPUMove():
    global boardState

    print("Checking for winning states...", end='')
    # Check for previously seen board state that led to a win
    for i in range(len(previousGames)):
        if previousGames[i][0] == 2 and previousGames[i][1] == cpuChar:
            print(f'Found a won game: Game#{previousGames[i]}')
            for j in range(len(previousGames[i])):
                if previousGames[i][j] == boardState:
                    boardState = previousGames[i][j + 1]
                    printBoard()
                    print(f'Found a familiar board state!')
                    return

    print(" None found.\nChecking for tie states...", end='')
    # Check for previously seen board state that led to a tie
    for i in range(len(previousGames)):
        if previousGames[i][0] == 1 and previousGames[i][1] == cpuChar:
            print(f'Found a tied game: Game#{previousGames[i]}')
            for j in range(len(previousGames[i])):
                if previousGames[i][j] == boardState:
                    boardState = previousGames[i][j + 1]
                    printBoard()
                    print(f'Found a familiar board state!')
                    return

    print(" None found.\nGenerating a random move.")
    # If board state has not been encountered, randomly generate a move
    boardState[getRandomMove()] = cpuChar
    printBoard()
    return

def selfTrainingMove():
    global boardState

    # Check for previously seen board state that led to a win
    for i in range(len(previousGames)):
        if previousGames[i][0] == 2 and previousGames[i][1] == cpuChar:
            for j in range(len(previousGames[i])):
                if previousGames[i][j] is boardState and j + 1 < len(previousGames[i][j]):
                    print(previousGames[i][j+1])
                    boardState = previousGames[i][j + 1]
                    return

    # Check for previously seen board state that led to a tie
    for i in range(len(previousGames)):
        if previousGames[i][0] == 1 and previousGames[i][1] == cpuChar:
            for j in range(2, len(previousGames[i])):
                if previousGames[i][j] == boardState and j + 1 < len(previousGames[i][j]):
                    print(previousGames[i][j + 1])
                    boardState = previousGames[i][j + 1]
                    return

    # If board state has not been encountered, randomly generate a move
    boardState[getRandomMove()] = cpuChar
    return

def tied():
    for i in range(len(boardState)):
        try:
            if isinstance(int(boardState[i]), int):
                return False
        except ValueError:
            pass
    return True

def checkWinner():
    if boardState[0] == 'X' and boardState[1] == 'X' and boardState[2] == 'X': return 'X'
    if boardState[3] == 'X' and boardState[4] == 'X' and boardState[5] == 'X': return 'X'
    if boardState[6] == 'X' and boardState[7] == 'X' and boardState[8] == 'X': return 'X'
    if boardState[0] == 'X' and boardState[3] == 'X' and boardState[6] == 'X': return 'X'
    if boardState[1] == 'X' and boardState[4] == 'X' and boardState[7] == 'X': return 'X'
    if boardState[2] == 'X' and boardState[5] == 'X' and boardState[8] == 'X': return 'X'
    if boardState[0] == 'X' and boardState[4] == 'X' and boardState[8] == 'X': return 'X'
    if boardState[2] == 'X' and boardState[4] == 'X' and boardState[6] == 'X': return 'X'

    if boardState[0] == 'O' and boardState[1] == 'O' and boardState[2] == 'O': return 'O'
    if boardState[3] == 'O' and boardState[4] == 'O' and boardState[5] == 'O': return 'O'
    if boardState[6] == 'O' and boardState[7] == 'O' and boardState[8] == 'O': return 'O'
    if boardState[0] == 'O' and boardState[3] == 'O' and boardState[6] == 'O': return 'O'
    if boardState[1] == 'O' and boardState[4] == 'O' and boardState[7] == 'O': return 'O'
    if boardState[2] == 'O' and boardState[5] == 'O' and boardState[8] == 'O': return 'O'
    if boardState[0] == 'O' and boardState[4] == 'O' and boardState[8] == 'O': return 'O'
    if boardState[2] == 'O' and boardState[4] == 'O' and boardState[6] == 'O': return 'O'

    return

def beginGame():
    global boardState, currentGame
    boardState = ['1', '2', '3', '4', '5', '6', '7', '8', '9']
    print("Beginning game...")
    playerChar = generateFirstPlayer()

    if playerChar == 'X': recentPlayer = 'CPU'
    else: recentPlayer = 'PLAYER'
    printBoard()

    currentGame.append(cpuChar)
    currentGame.append(boardState.copy())

    while(True):
        if recentPlayer == 'CPU':
            playerChoice = int(input("(1-9) Move? "))
            try:
                if isinstance(int(boardState[playerChoice - 1]), int):
                    boardState[playerChoice - 1] = playerChar
                    currentGame.append(boardState.copy())
                    printBoard()
                    recentPlayer = 'PLAYER'

                else:
                    print("Invalid move. Try again.")
                    recentPlayer = 'CPU'
            except ValueError: pass

        else:
            generateCPUMove()
            currentGame.append(boardState.copy())
            recentPlayer = 'CPU'

        if checkWinner() == 'X' and playerChar == 'X':
            print("The Player wins. (X)\n")
            currentGame.insert(0, 0)
            return
        if checkWinner() == 'X' and cpuChar == 'X':
            print("The CPU wins. (X)\n")
            currentGame.insert(0, 2)
            return
        if checkWinner() == 'O' and playerChar == 'O':
            print("The Player wins. (O)\n")
            currentGame.insert(0, 0)
            return
        if checkWinner() == 'O' and cpuChar == 'O':
            print("The CPU wins. (O)\n")
            currentGame.insert(0, 2)
            return

        if tied():
            print("Game is tied.\n")
            currentGame.insert(0, 1)
            return

def exitProgram():
    print("Exiting program...")
    exit(0)

def trainCPU():
    global boardState, currentGame
    numberOfGames = int(input("Number of games? "))
    print(f'Training CPU for {numberOfGames} games...')

    for i in range(0, numberOfGames):

        playerChar = generateFirstPlayer()

        if playerChar == 'X': recentPlayer = 'CPU'
        else: recentPlayer = 'PLAYER'

        currentGame.append(cpuChar)
        currentGame.append(boardState.copy())

        while True:
            if recentPlayer == 'CPU':  # Player goes first
                boardState[getRandomMove()] = playerChar
                currentGame.append(boardState.copy())
                recentPlayer = 'PLAYER'

            else:
                selfTrainingMove()
                currentGame.append(boardState.copy())
                recentPlayer = 'CPU'

            if checkWinner() == 'X' and playerChar == 'X':
                currentGame.insert(0, 0)
                break
            if checkWinner() == 'X' and cpuChar == 'X':
                currentGame.insert(0, 2)
                break
            if checkWinner() == 'O' and playerChar == 'O':
                currentGame.insert(0, 0)
                break
            if checkWinner() == 'O' and cpuChar == 'O':
                currentGame.insert(0, 2)
                break

            if tied():
                currentGame.insert(0, 1)
                break

        previousGames.append(currentGame.copy())
        currentGame = []
        boardState = ['1', '2', '3', '4', '5', '6', '7', '8', '9']

    print(f'CPU trained for {numberOfGames} games!')

def getInput():
    global currentGame, boardState
    while(True):
        print("1 --- Play the computer\n2 --- Train the computer\n3 --- Display game data\n4 --- Display formatted game data\n5 --- Exit")
        playerChoice = input("-> ")
        if playerChoice == "1":
            beginGame()
            previousGames.append(currentGame.copy())
            currentGame = []
        elif playerChoice == "2":
            trainCPU()
        elif playerChoice == "3":
            displayData()
        elif playerChoice == "4":
            displayFormattedGameData()
        elif playerChoice == "5":
            exitProgram()
        else:
            print("Invalid choice. Please choose again.")

def displayFormattedGameData():
    global boardState
    if len(previousGames) == 0:
        print("No previous games recorded!")
        return

    for i in range(len(previousGames)):
        print(f'\nGame#{i}\nCPU Character: {previousGames[i][1]}', end='')
        if previousGames[i][0] == 2: print("\tWinner: CPU")
        elif previousGames[i][0] == 1: print("\tWinner: TIED")
        else: print("\tWinner: PLAYER")
        for j in range(2, len(previousGames[i])):

            boardState = previousGames[i][j].copy()
            printBoard()
    print()

def getRandomMove():
    global boardState
    while True:
        move = random.randint(0, 8)
        try:
            if isinstance(int(boardState[move]), int):
                return move
        except ValueError:
            pass

getInput()