#include <stdio.h>
#include <stdlib.h>

// Define the size of the maze
#define MAZE_SIZE 5

// Function prototypes
void printMaze(char maze[MAZE_SIZE][MAZE_SIZE]);
void movePlayer(char maze[MAZE_SIZE][MAZE_SIZE], int *playerX, int *playerY, char move);
int isGoalReached(int playerX, int playerY);

int main() {
    // Initialize the maze with walls and the goal
    char maze[MAZE_SIZE][MAZE_SIZE] = {
        {' ', ' ', ' ', ' ', 'G'},
        {' ', '#', '#', '#', ' '},
        {' ', '#', ' ', '#', ' '},
        {' ', '#', ' ', ' ', ' '},
        {'P', ' ', ' ', ' ', ' '}
    };

    int playerX = 4; // Starting X position of the player
    int playerY = 0; // Starting Y position of the player
    char move;

    printf("Welcome to the Maze Game!\n");
    printf("Move using W (up), S (down), A (left), D (right)\n");
    printf("Reach the 'G' to win.\n");

    while (1) {
        // Print the maze
        printMaze(maze);
        
        // Read the player's move
        printf("Enter move (W/S/A/D): ");
        scanf(" %c", &move);
        
        // Move the player
        movePlayer(maze, &playerX, &playerY, move);

        // Check if the player has reached the goal
        if (isGoalReached(playerX, playerY)) {
            printf("Congratulations! You reached the goal!\n");
            break;
        }
    }

    return 0;
}

// Function to print the maze
void printMaze(char maze[MAZE_SIZE][MAZE_SIZE]) {
    system("clear"); // Clear the terminal screen (use "cls" on Windows)
    for (int i = 0; i < MAZE_SIZE; i++) {
        for (int j = 0; j < MAZE_SIZE; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}

// Function to move the player in the maze
void movePlayer(char maze[MAZE_SIZE][MAZE_SIZE], int *playerX, int *playerY, char move) {
    int newX = *playerX;
    int newY = *playerY;

    s
