#include <iostream>
#include "Game.h" // Include the header file for the Game class

int main() {
    // Create a Game object
    Game game;

    // Initialize the game with 2 ships and 3 mines on a 10x10 grid
    int numShips = 5;
    int numMines = 3;
    int gridWidth = 10;
    int gridHeight = 10;
    game.initGame(numShips, numMines, gridWidth, gridHeight);

    // Display the initial state of the game entities
    std::cout << "Initial game entities:" << std::endl;
    std::vector<GameEntity*> initialEntities = game.get_entities();
    for (GameEntity* entity : initialEntities) {
        std::cout << "Entity type: " << entity->getType() << " Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")" << std::endl;
    }

    // Run the game loop for a certain number of iterations
    int maxIterations = 10;
    double mineDistanceThreshold = 3.0;
    game.gameLoop(maxIterations, mineDistanceThreshold);

    // Display the final state of the game entities after the game loop
    std::cout << "Final game entities:" << std::endl;
    std::vector<GameEntity*> finalEntities = game.get_entities();
    for (GameEntity* entity : finalEntities) {
        std::cout << "Entity type: " << entity->getType() << " Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")" << std::endl;
    }

    // Clean up dynamically allocated entities
    for (GameEntity* entity : finalEntities) {
        delete entity;
    }

    return 0;
}